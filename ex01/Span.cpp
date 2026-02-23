/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 13:56:24 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/23 18:47:20 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <limits>

Span::Span() : m_size(0), m_data(0), _idx(0)
{

}

Span::Span(unsigned int size) : m_size(size), m_data(new int[size]), _idx(0)
{

}

Span::Span(const Span& other) : m_size(other.m_size)
{
	//TODO: cpy
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		m_size = other.m_size;
		//TODO: cpy

	}
	return (*this);
}

Span::~Span()
{
	delete[] m_data;
}

void	Span::addNumber(int nb)
{
	if (_idx < m_size)
	{
		m_data[_idx] = nb;
		++_idx;
		return ;
	}
	throw std::runtime_error("no more space in span");
}

int		Span::shortestSpan() const
{
	int	span = std::numeric_limits<int>::max();
	
	for(unsigned int i = 0 ; i != _idx - 1 ; ++i)
	{
		for(unsigned int j = i + 1 ; j != _idx ; ++j)
		{
			if (m_data[i] - m_data[j] >= 0 && m_data[i] - m_data[j] < span)
				span = m_data[i] - m_data[j];
			if (m_data[j] - m_data[i] >= 0 && m_data[j] - m_data[i] < span)
				span = m_data[j] - m_data[i];
		}
	}
	return (span);
}

int		Span::longestSpan() const
{
	int	span = 0;
	
	for(unsigned int i = 0 ; i != _idx - 1 ; ++i)
	{
		for(unsigned int j = i + 1 ; j != _idx ; ++j)
		{
			if (m_data[i] - m_data[j] > span)
				span = m_data[i] - m_data[j];
			if (m_data[j] - m_data[i] > span)
				span = m_data[j] - m_data[i];
		}
	}
	return (span);
}

void	Span::addRange(unsigned int pos, int* toAdd)
{
	if (pos >= m_size)
		return ;
	
	int	size = sizeof(toAdd) / 2 + 1;
	int* ite = &toAdd[size];
	_idx = pos;
	for (int* it = &toAdd[0] ; _idx < m_size && ite != it; ++it)
	{
		this->addNumber(*it);
	}
}


int*	Span::getDatas() const
{
	return (m_data);
}

int	Span::getData(unsigned int pos) const
{
	if (pos >= _idx)
		throw std::runtime_error("out of bound");
	return (m_data[pos]);
}

unsigned int	Span::size() const
{
	return (m_size);
}
