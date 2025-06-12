#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    if (argc != 2){
        std::cerr << "Usage: ./btc <filename>" << std::endl;
        return 1;
    }
    (void)argv;
    BitcoinExchange Btc("data.csv", argv[1]);
    if (Btc.loadCSV())
        return 1;
    Btc.print();


}