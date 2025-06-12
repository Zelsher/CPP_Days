#include "../inc/easyfind.hpp"
#include <deque>

int main(){

    std::deque<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test.push_back(5);

    // Affichage pour vérifier
    for (size_t i = 0; i < test.size(); ++i) {
        std::cout << "[" << test[i] << "] ";
    }
    std::cout << std::endl;

	std::cout << std::endl << "start looking for 1" << std::endl;
	try {
		int n = easyfind(test, 1);
		std::cout << "Value found : " << n  << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}


	std::cout << std::endl << "start looking for 33" << std::endl;
	try {
		int n = easyfind(test, 33);
		std::cout << "Value found : " << n  << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}

    return 0;
}