#include "PmergeMe.hpp"

PmergeMe::~PmergeMe()
{
	// std::cout << "Destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
	// std::cout << "Recopy constructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	(void)other;
	return *this;
	// std::cout << "Assignment operator called" << std::endl;
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
		vector.push_back(atoi(av[i]));
		deque.push_back(atoi(av[i]));
	}
	NbElements = ac - 1;
}

void PmergeMe::DisplayVector(std::string s)
{
	std::cout << s;
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::DisplayDeque(std::string s)
{
	std::cout << s;
	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::IsSorting()
{
	for (size_t i = 0; i < NbElements - 1; i++)
	{
		if (vector[i] > vector[i + 1]){
			std::cout << "VECTOR NON TRIER" << std::endl;
			std::cout << vector[i] << " " << vector[i + 1] << std::endl;
			return ;
		}
		if (deque[i] > deque[i+1]){
			std::cout << "DEQUE NON TRIER" << std::endl;
			std::cout << deque[i] << " " << deque[i + 1] << std::endl;
			return ;
		}
	}

	std::cout << "TRIER" << std::endl;
}

std::vector<int> &PmergeMe::GetVector() { return vector; }
std::deque<int> &PmergeMe::GetDeque() { return deque; }

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


void merge(std::deque<int> &left, std::deque<int> &right, std::deque<int> &deque)
{
	std::deque<int>::iterator it_left = left.begin();
	std::deque<int>::iterator end_left = left.end();

	std::deque<int>::iterator it_right = right.begin();
	std::deque<int>::iterator end_right = right.end();

	deque.clear();

	while (it_left != end_left && it_right != end_right)
	{
		if (*it_left < *it_right)
		{
			deque.push_back(*it_left);
			it_left++;
		}
		else
		{
			deque.push_back(*it_right);
			it_right++;
		}
	}
	finish_vec<std::deque<int> >(it_left, end_left, deque);
	finish_vec<std::deque<int> >(it_right, end_right, deque);
}

void PmergeMe::MegeInsert(std::deque<int> &deque)
{
	if (deque.size() <= 1)
		return;

    size_t middle = deque.size() / 2;

    std::deque<int> left;
    std::deque<int> right;

    left.assign(deque.begin(), deque.begin() + middle);
    right.assign(deque.begin() + middle, deque.end());
	PmergeMe::MegeInsert(left);
	PmergeMe::MegeInsert(right);
	merge(left, right, deque);
}
