/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 13:56:24 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/27 19:01:10 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <limits>

Span::Span() : m_size(0), m_data(0), m_idx(0)
{

}

Span::Span(unsigned int size) : m_size(size), m_idx(m_data.begin())
{

}

Span::Span(const Span& other) : m_size(other.m_size), m_data(m_size), m_idx(other.m_idx)
{
	// for (unsigned i = 0 ; i < m_size ; ++i)
	// {
	// 	this->addNumber(other.m_data[i]);
	// }
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		// m_size = 0;
		// delete m_data;
		// m_data = std::list<int>[other.m_size]();
		// for (unsigned i = 0 ; i < m_size ; ++i)
		// {
		// 	this->addNumber(other.m_data[i]);
		// }
		for (std::vector<int>::const_iterator it = m_data.begin(); it != m_data.end() ; ++it)
		{
			this->addNumber(*it);
		}
		m_size = other.m_size;
		m_idx = other.m_idx;
	}
	return (*this);
}

Span::~Span()
{
	// delete[] m_data;
}

void	Span::addNumber(int nb)
{
	if (m_idx != m_data.end())
	{
		*m_idx = nb;
		++m_idx;
		return ;
	}
	throw std::runtime_error("no more space in span");
}

int		Span::shortestSpan() const
{
	if (m_size < 2)
		throw std::runtime_error("no enough values to get a span");
	
	int	span = std::numeric_limits<int>::max();
	
	for (std::vector<int>::const_iterator it = m_data.begin(); it != m_data.end() - 1 ; ++it)
	{
		for (std::vector<int>::const_iterator cmp = m_data.begin() + 1; cmp != m_data.end() ; ++cmp)
		{
			if (*it - *cmp >= 0 && *it - *cmp < span)
				span = *it - *cmp;
			if (*cmp - *it >= 0 && *cmp - *it < span)
				span = *cmp - *it;
		}
	}
	return (span);
}

int		Span::longestSpan() const
{
	if (m_size < 2)
		throw std::runtime_error("no enough values to get a span");

	int	span = 0;
	
	for (std::vector<int>::const_iterator it = m_data.begin(); it != m_data.end() - 1 ; ++it)
	{
		for (std::vector<int>::const_iterator cmp = m_data.begin() + 1; cmp != m_data.end() ; ++cmp)
		{
			if (*it - *cmp >= 0 && *it - *cmp > span)
				span = *it - *cmp;
			if (*cmp - *it >= 0 && *cmp - *it > span)
				span = *cmp - *it;
		}
	}
	return (span);
}
#include <algorithm>
void	Span::addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	// if (pos >= m_size)
	// 	return ;
	// std::ranges::range r;
	for (std::vector<int>::const_iterator it = begin ; it != end; ++it)
	{
		this->addNumber(*it);
	}
}

// void	Span::addRange(unsigned int pos, int* toAdd)
// {
// 	if (pos >= m_size)
// 		return ;
	
// 	int	size = sizeof(toAdd) / 2 + 1;
// 	int* ite = &toAdd[size];
// 	m_idx = pos;
// 	for (int* it = &toAdd[0] ; m_idx < m_size && ite != it; ++it)
// 	{
// 		this->addNumber(*it);
// 	}
// }

std::vector<int>	Span::getDatas() const
{
	return (m_data);
}

// // TODO: overload [] operator
// int	Span::getData(unsigned int pos) const
// {
// 	if (pos >= m_idx)
// 		throw std::runtime_error("out of bound");
// 	return (m_data[pos]);
// }


std::vector<int>::const_iterator	Span::begin() const
{
	return (m_data.begin());
}

std::vector<int>::const_iterator	Span::end() const
{
	return (m_data.end());
}

unsigned int	Span::size() const
{
	return (m_size);
}
