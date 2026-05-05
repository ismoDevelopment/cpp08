#include "Span.hpp"

Span::Span() : _N(0), _min_span(INT_MAX), _max_span(INT_MIN)
{

}

Span::Span(unsigned int N) : _N(N), _min_span(INT_MAX), _max_span(INT_MIN)
{

}

Span::Span(const Span &other)
{
	this->_N = other._N;
	this->_min_span = other._min_span;
	this->_max_span = other._max_span;
	this->_nums = other._nums;
}

Span Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	this->_N = other._N;
	this->_min_span = other._min_span;
	this->_max_span = other._max_span;
	this->_nums = other._nums;
	return (*this);
}

Span::~Span()
{

}

void	Span::calculateSpans()
{
	std::sort(this->_nums.begin(), this->_nums.end());

	for (auto it = this->_nums.begin(); it != this->_nums.end(); ++it)
	{
		long long	span = llabs(*it - *(it + 1));

		if (span < this->_min_span)
			this->_min_span = span;
		if (span > this->_max_span)
			this->_max_span = span;
	}
}

void	Span::addNumber(int num)
{
	if (this->_nums.size() >= this->_N)
		throw SpanFullException();

	this->_nums.push_back(num);
	this->calculateSpans();
}

void	Span::addNumbers(std::vector<int> range)
{
	if (this->_nums.size() + range.size() > this->_N)
		throw SpanFullException();

	this->_nums.insert(this->_nums.end(), range.begin(), range.end());
	this->calculateSpans();
}

long long	Span::shortestSpan(void) const
{
	if (this->_nums.size() <= 1)
		return (0);
	return (this->_min_span);
}

long long	Span::longestSpan(void) const
{
	if (this->_nums.size() <= 1)
		return (0);
	return (this->_max_span);
}
