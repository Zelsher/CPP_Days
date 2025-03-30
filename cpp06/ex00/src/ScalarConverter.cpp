#include "../inc/ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& input) {
    // Tentative de conversion en char
    char c = 0;
    bool isChar = (input.length() == 3 && input[0] == '\'' && input[2] == '\'');
    if (isChar) {
        c = input[1];
    }

    // Tentative de conversion en int
    char* endPtr;
    long intValue = std::strtol(input.c_str(), &endPtr, 10);
    bool isInt = (*endPtr == '\0');

    // Tentative de conversion en float
    float floatValue = std::strtof(input.c_str(), &endPtr);
    bool isFloat = (*endPtr == 'f' && *(endPtr + 1) == '\0');

    // Tentative de conversion en double
    double doubleValue = std::strtod(input.c_str(), &endPtr);
    bool isDouble = (*endPtr == '\0');

    // Gestion des pseudo-littéraux
    if (input == "-inff" || input == "+inff" || input == "nanf") {
        floatValue = std::strtof(input.c_str(), nullptr);
        doubleValue = static_cast<double>(floatValue);
        isFloat = true;
    } 
    else if (input == "-inf" || input == "+inf" || input == "nan") {
        doubleValue = std::strtod(input.c_str(), nullptr);
        isDouble = true;
    }

    // Affichage des conversions
    std::cout << std::fixed << std::setprecision(1);

    // Conversion en char
    if (isChar) {
        std::cout << "char: '" << c << "'" << std::endl;
    } else if (isInt && intValue >= 32 && intValue <= 126) {
        std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
    } else if (isInt) {
        std::cout << "char: Non affichable" << std::endl;
    } else { 
        std::cout << "char: Impossible" << std::endl;
    }

    // Conversion en int
    if (isInt) {
        std::cout << "int: " << intValue << std::endl;
    } else {
        std::cout << "int: Impossible" << std::endl;
    }

    // Conversion en float
    if (isFloat || isInt || isDouble) {
        std::cout << "float: " << floatValue << "f" << std::endl;
    } else {
        std::cout << "float: Impossible" << std::endl;
    }

    // Conversion en double
    if (isDouble || isFloat || isInt) {
        std::cout << "double: " << doubleValue << std::endl;
    } else {
        std::cout << "double: Impossible" << std::endl;
    }
}