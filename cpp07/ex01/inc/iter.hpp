#include <iostream>

template <typename T>
void    incr(T &n)
{
    n++;
}

template <typename T>
void    change_last_char(T &n)
{
    n++;
}

template <typename T>
void iter(T *array, size_t length, void (*function)(T &))
{
    size_t n = 0;
    while (n < length)
    {
        function(array[n]);
        n++;
    }
}