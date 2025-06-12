#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>

struct Data
{
    std::string name;
};

class Serializer 
{
    private:
        Serializer();  // Constructeur privé pour empêcher l'instanciation
        Serializer(const Serializer&); // Suppression du constructeur de copie
        Serializer& operator=(const Serializer&); // Suppression de l'opérateur d'affectation

    public:
        static uintptr_t    serialize(Data *ptr);
        static Data         *deserialize(uintptr_t raw);
};
