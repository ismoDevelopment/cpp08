#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <iostream>
#include <algorithm>

int main()
{
	MutantStack<int> mstack;

	std::cout << "Iteratig over MutantStack" << std::endl;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	/*

		Testing STL find algorithm on a copy constructed MutantStack

	*/
	std::cout << "\nFinding 737 on copy constructed MutantStack" << std::endl;
	{
		MutantStack<int> s(mstack);

		for (int e : s)
		{
			std::cout << e << std::endl;
		}

		auto it = std::find(s.begin(), s.end(), 737);

		if (it != s.end())
			std::cout << "found " << *it << std::endl;
	}
	/*

		Testing STL find algorithm on an assignment constructed MutantStack

	*/
	std::cout << "\nFinding 737 on assignment constructed MutantStack" << std::endl;
	{
		MutantStack<int> s = mstack;

		for (int e : s)
		{
			std::cout << e << std::endl;
		}

		auto it = std::find(s.begin(), s.end(), 737);

		if (it != s.end())
			std::cout << "found " << *it << std::endl;
	}

	/*

		Sorting MutantStack

	*/

	std::cout << "\nSorting mstack: " << std::endl;
	{
		std::sort(mstack.begin(), mstack.end());

		for (int e : mstack)
		{
			std::cout << e << std::endl;
		}
	}
	return 0;
}
