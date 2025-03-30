#include "../inc/ScalarConverter.hpp"

int main() {
    ScalarConverter::convert("42");
    std::cout << std::endl;
    ScalarConverter::convert("-4.2f");
    std::cout << std::endl;
    ScalarConverter::convert("+inf");
    std::cout << std::endl;
    ScalarConverter::convert("'a'");
    std::cout << std::endl;
    ScalarConverter::convert("nan");
    return 0;
}
