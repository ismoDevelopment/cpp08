#include <array>
#include <set>
#include <iostream>
#include "easyfind.hpp"

int	main(void)
{
	std::set<int> set{1, 5, 3};

	try
	{
		std::cout << easyfind<std::set<int>>(set, 3) << std::endl;	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << easyfind<std::set<int>>(set, 9) << std::endl;	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
