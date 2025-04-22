#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class ValueNotFound : public std::exception {
	public:
	    virtual const char *what() const throw() {
            return ("Value not found");
        }
};

class Span
{
    private:
        unsigned int *tab;
    public:
    	Span(unsigned int n);
		Span(const Span &Span);
		Span &operator=(const Span &Span);
		~Span();

        addNumber(unsigned int n);

        shortestSpan();
        longSpan();
        
};

#endif 
