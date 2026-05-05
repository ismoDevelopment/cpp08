#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack()
{

}

template <class T>
MutantStack<T>::MutantStack([[maybe_unused]] const MutantStack<T> &other)
{

}

template <class T>
MutantStack<T> MutantStack<T>::operator=([[maybe_unused]] const MutantStack<T> &other)
{
	return (*this);
}

template <class T>
MutantStack<T>::~MutantStack()
{

}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}
