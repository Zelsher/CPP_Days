#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
    protected :
        std::string type;

    public :
        WrongAnimal(void);
        WrongAnimal(std::string s);

        WrongAnimal(const WrongAnimal &animal);
        WrongAnimal& operator=(const WrongAnimal &animal);
    
        ~WrongAnimal(void);
        std::string getType(void) const;
        void makeSound(void) const;
};

#endif