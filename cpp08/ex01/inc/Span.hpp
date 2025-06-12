#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <ctime> 

class Span
{ 
    private :
        unsigned int _n;
        unsigned int _index;
        std::vector<int> _tab;
    public :
        Span(unsigned int N);
        ~Span();
        Span(const Span &other);
        Span& operator=(const Span &other);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        template <typename Iterator>
        void addNumbers(Iterator start, Iterator end)
        {
            for (Iterator it = start; it != end; ++it) {
                    addNumber(*it);
            }
        }

        // std::vector<int>::iterator begin() { return _tab.begin(); }
        // std::vector<int>::iterator end() { return _tab.end(); }
        
        class NotEnoughElement : public std::exception {
            public:
                virtual const char *what() const throw() {
                    return ("Not enough element");
                }
        };
};

// std::ostream& operator<<(std::ostream& os, const Span& other);

#endif 
