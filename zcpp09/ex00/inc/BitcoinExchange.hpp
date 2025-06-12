#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <cstdlib>

class BitcoinExchange
{ 
    private :
        std::string _fileCSV;
        std::string _fileInput;
        std::map<std::string, double> _tab;
    public :
        BitcoinExchange(std::string s1, std::string s2);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange& operator=(const BitcoinExchange &other);

        int loadCSV();
        void print();
        double find_closer(std::string date);
};

// std::ostream& operator<<(std::ostream& os, const BitcoinExchange& other);

#endif 
