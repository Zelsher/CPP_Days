#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "number of parameters invalid" << std::endl;
        return (1);
    }
    std::ifstream inputFile(av[1]);

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }
    std::string str = (std::string)av[1] + ".replace";

    std::ofstream   outputFile(str.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error create output file." << std::endl;
        inputFile.close();
        return (1);
    }

    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t n = 0;
        while ((n = line.find(s1, n)) != std::string::npos) {
            line.erase(n, s1.length());
            line.insert(n, s2);
            n += s2.length();
        }
        outputFile << line << std::endl;
    }
    outputFile.close();
    inputFile.close();
    return 0;
}