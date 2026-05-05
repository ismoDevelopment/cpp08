#include "Span.hpp"

int main()
{
	/*

		10k RANDOM NUMBERS

	*/
	std::random_device				rnd;
	std::mt19937					rng(rnd());
	std::uniform_int_distribution<>	distribution(0, INT_MAX);

	Span sp = Span(1000);

	for (int	i{}; i < 1000; i++)
	{
		sp.addNumber(distribution(rng));
	}

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	/*

		ADDING A NUMBER TO A FULL SPAN

	*/
	std::cout << "\n";
	try {
			Span sp2 = Span(sp);
			sp2.addNumber(19);
			std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	/*

		ADDING MULTIPLE NUMBERS

	*/
	std::cout << "\n";

	Span sp3 = Span(10000);
	std::vector<int> vec;

	for (size_t i{}; i < 10000; i++)
	{
		vec.push_back(distribution(rng));
	}

	sp3.addNumbers(vec);

	std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	std::cout << "\n";

	return 0;
}
