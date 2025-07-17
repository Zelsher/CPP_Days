#include "../inc/PmergeMe.hpp"

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	(void)other;
	return *this;
}

bool isValidInt(const char *str)
{
	char *endptr;
	errno = 0;
	long val = strtol(str, &endptr, 10);

	if ((errno == ERANGE && (val == LONG_MAX || val == LONG_MIN)) || (errno != 0 && val == 0))
		return false;

	if (endptr == str || *endptr != '\0' || val > INT_MAX || val <= 0)
		return false;

	return true;
}

PmergeMe::PmergeMe(int ac, char **av)
{
	for (int i = 1; av[i] != NULL; i++)
	{
		if (!isValidInt(av[i]))
		{
			std::cerr << "Error: " << av[i] << " isn't a positif number" << std::endl;
			exit(1);
		}
		_vector.push_back(atoi(av[i]));
		_deque.push_back(atoi(av[i]));
	}
	_NbElements = ac - 1;
}

void PmergeMe::DisplayVector(std::string s)
{
	std::cout << s;
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::DisplayDeque(std::string s)
{
	std::cout << s;
	for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::IsSorting()
{
	for (size_t i = 0; i < _NbElements - 1; i++)
	{
		if (_vector[i] > _vector[i + 1]){
			std::cout << "vector not sorted" << std::endl;
			std::cout << _vector[i] << " " << _vector[i + 1] << std::endl;
			return ;
		}
		if (_deque[i] > _deque[i+1]){
			std::cout << "deque not sorted" << std::endl;
			std::cout << _deque[i] << " " << _deque[i + 1] << std::endl;
			return ;
		}
	}

	std::cout << "Sorted" << std::endl;
}

std::vector<int> &PmergeMe::GetVector() { return _vector; }
std::deque<int> &PmergeMe::GetDeque() { return _deque; }

template <typename T>
void finish_vec(typename T::iterator it, typename T::iterator end, T &vec) {
	while (it != end){
		vec.push_back(*it);
		it++;
	}
}

void merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &vec)
{
	
	std::vector<int>::iterator it_left = left.begin();
	std::vector<int>::iterator end_left = left.end();

	std::vector<int>::iterator it_right = right.begin();
	std::vector<int>::iterator end_right = right.end();

	vec.clear();

	while (it_left != end_left && it_right != end_right)
	{
		if (*it_left < *it_right)
		{
			vec.push_back(*it_left);
			it_left++;
		}
		else
		{
			vec.push_back(*it_right);
			it_right++;
		}
	}
	finish_vec<std::vector<int> >(it_left, end_left, vec);
	finish_vec<std::vector<int> >(it_right, end_right, vec);
}

void PmergeMe::MegeInsert(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return;

    size_t middle = vec.size() / 2;

    std::vector<int> left;
    std::vector<int> right;

    left.assign(vec.begin(), vec.begin() + middle);
    right.assign(vec.begin() + middle, vec.end());
	PmergeMe::MegeInsert(left);
	PmergeMe::MegeInsert(right);
	merge(left, right, vec);
}


void merge(std::deque<int> &left, std::deque<int> &right, std::deque<int> &_deque)
{
	std::deque<int>::iterator it_left = left.begin();
	std::deque<int>::iterator end_left = left.end();

	std::deque<int>::iterator it_right = right.begin();
	std::deque<int>::iterator end_right = right.end();

	_deque.clear();

	while (it_left != end_left && it_right != end_right)
	{
		if (*it_left < *it_right)
		{
			_deque.push_back(*it_left);
			it_left++;
		}
		else
		{
			_deque.push_back(*it_right);
			it_right++;
		}
	}
	finish_vec<std::deque<int> >(it_left, end_left, _deque);
	finish_vec<std::deque<int> >(it_right, end_right, _deque);
}

void PmergeMe::MegeInsert(std::deque<int> &_deque)
{
	if (_deque.size() <= 1)
		return;

    size_t middle = _deque.size() / 2;

    std::deque<int> left;
    std::deque<int> right;

    left.assign(_deque.begin(), _deque.begin() + middle);
    right.assign(_deque.begin() + middle, _deque.end());
	PmergeMe::MegeInsert(left);
	PmergeMe::MegeInsert(right);
	merge(left, right, _deque);
}
