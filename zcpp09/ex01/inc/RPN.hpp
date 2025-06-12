#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <cstdlib>
# include <stack>
# include <sstream>
# include <queue>

class RPN
{ 
    private :
        std::string _str;
        std::stack<int> q;
    public :
        RPN(std::string str);
        ~RPN();
        
        int evaluate();
        void calcul(char c);
        
};

// std::ostream& operator<<(std::ostream& os, const RPN& other);

#endif
