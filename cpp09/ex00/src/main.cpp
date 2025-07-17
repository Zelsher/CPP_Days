#include "../inc/BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    (void)argv;
    if (argc != 2){
        std::cerr << "Error, try : ./btc <filename>" << std::endl;
        return (1);
    }
    BitcoinExchange Btc("data.csv", argv[1]);
    if (Btc.loadCSV())
        return 1;
    Btc.print();


}