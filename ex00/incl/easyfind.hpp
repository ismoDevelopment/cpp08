#pragma once
#ifndef EASYFIND_HPP

#include <algorithm>
#include <exception>

class NotFoundException : public std::exception {
	public:
		const char *what() const throw()
		{
			return ("Integer not found in iterator\n");
		}
};

template <typename T>
int	easyfind(T array, int to_find)
{
	typename T::const_iterator	it;

	it = std::find(array.begin(), array.end(), to_find);
	if (it == array.end())
		throw NotFoundException();
	return (*it);
}
#endif
