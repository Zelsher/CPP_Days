#include "../inc/MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "size: " << mstack.size() << std::endl;
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size after pop: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "[" << *it << "] ";
        ++it;
    }
    std::cout << std::endl;
    std::stack<int> s(mstack);


    // std::list<int> lst;
    // lst.push_back(5);
    // lst.push_back(17);
    // std::cout << "size: " << lst.size() << std::endl;
    // std::cout << "top: " << lst.back() << std::endl;
    // lst.pop_back();
    // std::cout << "size after pop: " << lst.size() << std::endl;
    // lst.push_back(3);
    // lst.push_back(5);
    // lst.push_back(737);
    // //[...]
    // lst.push_back(0);
    // std::list<int>::iterator ittt = lst.begin();
    // std::list<int>::iterator ittte = lst.end();
    // ++ittt;
    // --ittt;
    // while (ittt != ittte)
    // {
    //     std::cout << "[" << *ittt << "] ";
    //     ++ittt;
    // }
    // std::cout << std::endl;

    return 0;
}