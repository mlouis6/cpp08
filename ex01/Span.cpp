/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 13:56:24 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/22 15:36:15 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <limits>

Span::Span() : _size(0), _data(0), _idx(0)
{

}

Span::Span(unsigned int size) : _size(size), _data(new int[size]), _idx(0)
{

}

Span::Span(const Span& other) : _size(other._size)
{
	//TODO: cpy
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_size = other._size;
		//TODO: cpy

	}
	return (*this);
}

Span::~Span()
{
	delete[] _data;
}

void	Span::addNumber(int nb)
{
	if (_idx < _size)
	{
		_data[_idx] = nb;
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
			if (_data[i] - _data[j] >= 0 && _data[i] - _data[j] < span)
				span = _data[i] - _data[j];
			if (_data[j] - _data[i] >= 0 && _data[j] - _data[i] < span)
				span = _data[j] - _data[i];
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
			if (_data[i] - _data[j] > span)
				span = _data[i] - _data[j];
			if (_data[j] - _data[i] > span)
				span = _data[j] - _data[i];
		}
	}
	return (span);
}

void	Span::addRange(unsigned int pos, int* toAdd)
{
	if (pos >= _size)
		return ;
	
	int	size = sizeof(toAdd) / 2 + 1;
	int* ite = &toAdd[size];
	_idx = pos;
	for (int* it = &toAdd[0] ; _idx < _size && ite != it; ++it)
	{
		this->addNumber(*it);
	}
}


int*	Span::getDatas() const
{
	return (_data);
}

int	Span::getData(unsigned int pos) const
{
	if (pos >= _idx)
		throw std::runtime_error("out of bound");
	return (_data[pos]);
}

unsigned int	Span::size() const
{
	return (_size);
}
