#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

class ValueNotFound : public std::exception {
	public:
	    virtual const char *what() const throw() {
            return ("Value not found");
        }
};

template<typename T>
int	easyfind(T const & array, int const n) {
    for (typename T::const_iterator i = array.begin(); i != array.end(); ++i)
    {
        if (*i == n)
            return *i;
    }
    throw ValueNotFound();
}


#endif 
