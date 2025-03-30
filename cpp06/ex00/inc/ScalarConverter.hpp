#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>

class ScalarConverter {
private:
    ScalarConverter();  // Constructeur privé pour empêcher l'instanciation
    ScalarConverter(const ScalarConverter&); // Suppression du constructeur de copie
    ScalarConverter& operator=(const ScalarConverter&); // Suppression de l'opérateur d'affectation

public:
    static void convert(const std::string& input);
};

