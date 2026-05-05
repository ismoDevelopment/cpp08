#pragma once
#ifndef SPAN_HPP

#include <vector>
#include <array>
#include <stdlib.h>
#include <limits.h>
#include <iostream>
#include <random>
#include <algorithm>

class SpanFullException : public std::exception {
	public:
		const char *what() const throw()
		{
			return ("Span is full\n");
		}
};

class Span {
	private:
		unsigned int		_N;
		std::vector<int>	_nums;
		long long		_min_span;
		long long		_max_span;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span operator=(const Span &other);
		~Span();
		void		addNumber(int num);
		void	addNumbers(std::vector<int> range);
		long long	shortestSpan(void);
		long long	longestSpan(void);
};
#endif
