#include "../inc/Span.hpp"

Span::Span(unsigned int N)
{
	_n = N;
	_index = 0;
}
Span::Span(const Span&other)
{
	_tab = other._tab;
	_n = other._n;
	_index = other._index;
}
Span& Span::operator=(const Span &other)
{
	_tab = other._tab;
	_n = other._n;
	_index = other._index;
	return *this;
}
Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (_index == _n)
		throw std::overflow_error("Unable to add other elements");
	_tab.push_back(n);
	_index++;
}

int Span::shortestSpan()
{
	if (_index == 0 || _index == 1)
		throw Span::NotEnoughElement();
	
	std::sort(_tab.begin(), _tab.end());

	int min = _tab[1] - _tab[0];
	for (size_t i = 1; i < _tab.size(); ++i) {
        if (min > _tab[i] - _tab[i - 1])
			min = _tab[i] - _tab[i - 1];
    }
	return min;
}
int Span::longestSpan()
{
	if (_index == 0 || _index == 1)
		throw Span::NotEnoughElement();
	
	std::sort(_tab.begin(), _tab.end());
	return (_tab.back() - _tab.front());
}