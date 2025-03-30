#include "../inc/Serializer.hpp"

int main() 
{
    std::cout << Serializer::serialize() << std::endl;
    std::cout << Serializer::deserialize() << std::endl;
}
