#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <random>

#pragma once
class Base 
{
    private:  // Constructeur privé pour empêcher l'instanciation
        Base(const Base&); // Suppression du constructeur de copie
        Base& operator=(const Base&); // Suppression de l'opérateur d'affectation

    public:
        Base(){};
        virtual ~Base();
};


Base    *generate();
void    identify(Base *p);
void    identify(Base &p);