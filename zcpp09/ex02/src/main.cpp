#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac <= 1) {
		std::cerr << "Usage: " << av[0] << " [num1] [num2] [num3] ..." << std::endl;
		return 1;
	}

	PmergeMe pmm(ac, av);

	pmm.DisplayVector( "Before:  ");
	clock_t start = clock();

	pmm.MegeInsert(pmm.GetVector());

    double duration = (double)(clock() - start) / CLOCKS_PER_SEC * 1e6;

	pmm.DisplayVector("After :  ");

	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << duration << " us" << std::endl;

	start = clock();

	pmm.MegeInsert(pmm.GetDeque());

    duration = (double)(clock() - start) / CLOCKS_PER_SEC * 1e6;

	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << duration << " us" << std::endl;

	pmm.IsSorting();

	return 0;
}