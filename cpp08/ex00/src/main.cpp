#include "../inc/easyfind.hpp"

int main()
{
    std::vector<int> v = {1, 2, 3, 4};
    
    std::set<int> s;
    s.insert(4);

    //std::map<int, int> m;
    //m[1] = 4;

    std::cout << easyfind(v, 4) << std::endl;
    std::cout << easyfind(s, 4) << std::endl;

	try 
    {
		int n = easyfind(s, 4);
		std::cout << "Value found : " << n  << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
    try 
    {
		int n = easyfind(v, 4);
		std::cout << "Value found : " << n  << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

    try 
    {
		int n = easyfind(s, 5);
		std::cout << "Value found : " << n  << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
    try 
    {
		int n = easyfind(v, 5);
		std::cout << "Value found : " << n  << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}