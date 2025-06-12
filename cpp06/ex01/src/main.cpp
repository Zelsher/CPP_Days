#include "../inc/Serializer.hpp"

int main() 
{
    Data Object;
    Object.name = "test";
    Data *ptr_obj = &Object;
    uintptr_t test;

    std::cout << ptr_obj << std::endl;
    test = Serializer::serialize(ptr_obj);
    std::cout << test << std::endl;
    ptr_obj = Serializer::deserialize(test);
    std::cout << ptr_obj << std::endl;
}
