#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(const WrongCat &cat);
        WrongCat& operator=(const WrongCat &cat);

        void makeSound() const;
};

#endif