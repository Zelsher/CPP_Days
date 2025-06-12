#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template <class T>  
class MutantStack : public std::stack<T>
{ 
    private :
    public :
        MutantStack() : std::stack<T>() {}
        ~MutantStack() {}
        MutantStack(const MutantStack &other) : std::stack<T>(other) {}
        MutantStack& operator=(const MutantStack &other) { 
            if (this != &other) 
            {
                std::stack<T>::operator=(other);
            }
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator			begin();	
		iterator			end();
};


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
	return std::stack<T>::c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
	return std::stack<T>::c.end();
}


// std::ostream& operator<<(std::ostream& os, const MutantStack& other);

#endif 
