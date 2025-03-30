#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>

class Serializer 
{
    private:
        Serializer();  // Constructeur privé pour empêcher l'instanciation
        Serializer(const Serializer&); // Suppression du constructeur de copie
        Serializer& operator=(const Serializer&); // Suppression de l'opérateur d'affectation

    public:
        uintptr_t   serialize(Data *ptr);
        Data        *deserialize(uintptr_t raw);
};

