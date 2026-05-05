#include <array>
#include <vector>
#include <deque>
#include <set>
#include <iostream>
#include "easyfind.hpp"

int	main(void)
{
	std::cout << "Testing easyfind on an array" << std::endl;
	try
	{
		std::array<int, 3>	arr{1, 5, 3};
		std::cout << easyfind<std::array<int, 3>>(arr, 3) << std::endl;	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Testing easyfind on a vector" << std::endl;
	try
	{
		std::vector<int>	vec{1, 5, 3};
		std::cout << easyfind<std::vector<int>>(vec, 3) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Testing easyfind on a deque" << std::endl;
	try
	{
		std::deque<int>	d = {7, 5, 16, 8, 3};
		std::cout << easyfind<std::deque<int>>(d, 3) << std::endl;
		std::cout << easyfind<std::deque<int>>(d, 19) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
