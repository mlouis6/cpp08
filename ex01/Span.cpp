/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 13:56:24 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/02 11:19:22 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <limits>

Span::Span(unsigned int size) : m_capacity(size)
{
	m_data.reserve(size);
}

Span::Span(const Span& other) : m_capacity(other.m_capacity), m_data(other.m_data)
{

}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		for (std::vector<int>::const_iterator it = other.m_data.begin(); it != other.m_data.end() ; ++it)
		{
			this->addNumber(*it);
		}
		m_capacity = other.m_capacity;
	}
	return (*this);
}

Span::~Span()
{

}

void	Span::addNumber(int nb)
{
	if (m_data.size() < m_capacity)
	{
		m_data.push_back(nb);
		return ;
	}
	throw std::runtime_error("no more space in span");
}

long		Span::shortestSpan() const
{
	if (m_data.size() < 2)
		throw std::runtime_error("no enough values to get a span");
	
	long	span = std::numeric_limits<long>::max();

	for (unsigned i = 0; i < m_data.size() - 1 ; ++i)
	{
		for (unsigned j = i + 1; j < m_data.size() ; ++j)
		{
			long	ij = static_cast<long>(m_data[i]) - static_cast<long>(m_data[j]);
			if (ij >= 0 && ij < span)
				span = ij;
			long	ji = static_cast<long>(m_data[j]) - static_cast<long>(m_data[i]);
			if (ji >= 0 && ji < span)
				span = ji;
		}
	}
	return (span);
}

long		Span::longestSpan() const
{
	if (m_data.size() < 2)
		throw std::runtime_error("no enough values to get a span");

	long	span = 0;
	
	for (unsigned i = 0; i < m_data.size() - 1 ; ++i)
	{
		for (unsigned j = i + 1; j < m_data.size() ; ++j)
		{
			long	ij = static_cast<long>(m_data[i]) - static_cast<long>(m_data[j]);
			if (ij >= 0 && ij > span)
				span = ij;
			long	ji = static_cast<long>(m_data[j]) - static_cast<long>(m_data[i]);
			if (ji >= 0 && ji > span)
				span = ji;
		}
	}
	return (span);
}

void	Span::addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	for (std::vector<int>::const_iterator it = begin ; it != end; ++it)
	{
		this->addNumber(*it);
	}
}

int	Span::operator[](unsigned int pos)
{
	if (pos >= m_data.size())
		throw std::runtime_error("out of bound");
	return (m_data[pos]);	
}

std::vector<int>::const_iterator	Span::begin() const
{
	return (m_data.begin());
}

std::vector<int>::const_iterator	Span::end() const
{
	return (m_data.end());
}

unsigned int	Span::getCapacity() const
{
	return (m_capacity);
}

unsigned int	Span::size() const
{
	return (m_data.size());
}
