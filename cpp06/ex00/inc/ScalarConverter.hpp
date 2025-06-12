#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>

class ScalarConverter {
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter&);
    ScalarConverter& operator=(const ScalarConverter&);

public:
    static void convert(const std::string& input);
};

