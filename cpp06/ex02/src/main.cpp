#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

int main() 
{
    Base *base_ptr = generate();
    identify(base_ptr);
    delete base_ptr;
}

Base    *generate()
{
    //int r = std::rand() % (0 - 3 + 1) + min;
    std::random_device rd;                          // Graine aléatoire
    std::mt19937 gen(rd());                         // Générateur Mersenne Twister
    std::uniform_int_distribution<> dist(0, 2);     // Distribution uniforme entre 0 et 2 inclus

    int r = dist(gen);  
    std::cout << r << std::endl;

    Base *ptr;
    if (!r)
        return (ptr = new A());
    else if (r == 1)
        return (ptr = new B());
    return (ptr = new C());
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p)) 
    {
        std::cout << "Type réel : A\n";
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "Type réel : B\n";
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "Type réel : C\n";
    }
    else 
    {
        std::cout << "Type inconnu\n";
    }
}

void    identify(Base &p)
{
    if (dynamic_cast<A*>(&p)) 
    {
        std::cout << "Type réel : A\n";
    }
    else if (dynamic_cast<B*>(&p))
    {
        std::cout << "Type réel : B\n";
    }
    else if (dynamic_cast<C*>(&p))
    {
        std::cout << "Type réel : C\n";
    }
    else 
    {
        std::cout << "Type inconnu\n";
    }
}