#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <iostream>
#include <algorithm>

int main()
{
	MutantStack<int> mstack;

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
	{
		auto it = std::find(mstack.begin(), mstack.end(), 737);

		if (it != mstack.end())
			std::cout << "found " << *it << std::endl;
	}
	return 0;
}
