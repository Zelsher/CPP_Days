#include "RPN.hpp"

RPN::RPN(std::string str)
{
	for (size_t i = 0; i < str.length(); i += 2)
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '/' && str[i] != '*' && str[i] != '+')
		{
			std::cerr << "Invalid character in string" << std::endl;
			exit(1);
		}
		if (i + 1 < str.length() && str[i + 1] != ' ')
		{
			std::cerr << "Invalid character in string" << std::endl;
			exit(1);
		}
	}
	_str = str;
}

RPN::~RPN() { }

void RPN::calcul(char c)
{
	if (q.size() < 2){
		std::cerr << "Invalid RPN expression" << std::endl;
		exit(1);
	}
	int num = q.top();
	q.pop();
	switch (c)
	{
		case '+' :
			num += q.top();
			break;
		case '-' :
			num = q.top() - num;
			break;
		case '*' :
			num *= q.top();
			break;
		case '/' :
			num = q.top() / num;
			break;
		default:
			break;
	}
	q.pop();
	q.push(num);
} 

int RPN::evaluate() 
{
	for (size_t i = 0; i < _str.length(); i++)
	{
		if (_str[i] == ' ')
			continue;
		if (isdigit(_str[i]))
			q.push(_str[i] - '0');
		
		else if (_str[i] == '+' || _str[i] == '-' || _str[i] == '*' || _str[i] == '/')
			calcul(_str[i]);
	}

	if (q.size() != 1){
		std::cerr << "Invalid RPN expression" << std::endl;
		exit(1);
	}
	return q.top();
}