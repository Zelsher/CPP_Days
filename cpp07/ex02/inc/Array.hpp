#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        T       *_array = NULL;
        size_t  _size = 0;
    public:
        Array();
        Array(size_t length);
        T& operator[](int index);
        const T& operator[](int index) const;
		Array(const Array<T> &array);
		Array &operator=(const Array<T> &array);
        ~Array();

        size_t Size() const;
};

template <typename T>
Array<T>::Array()
{}

template <typename T>
Array<T>::Array(size_t length)
{
    _array = new T[length];
    _size = length;
}

template <typename T>
Array<T>::Array(const Array &array) : _size(array.Size()) 
{
    _array = new T[_size];
    for (size_t i = 0; i < _size; i++)
        _array[i] = array._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& array)
{
    if (this == &array)
        return *this;
    _array = new T[array.Size()];
    for (size_t i = 0; i < array.Size(); i++)
        _array[i] = array[i];
    _size = array.Size();
        return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
size_t Array<T>::Size() const
{
    return _size;
}

template <typename T>
T& Array<T>::operator[](int index)
{
    if (index >= 0 && index < _size) {
        return _array[index];
    } else {
        throw std::out_of_range("Index hors limites"); 
    }
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
    if (index >= 0 && index < _size) {
        return _array[index];
    } else {
        throw std::out_of_range("Index hors limites"); 
    }
}
