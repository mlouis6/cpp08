/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:22 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/29 11:26:24 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other)
{

}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& other)
{
	if (this != &other)
	{
		std::stack<T>::operator=(other);
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}

/** iterators */
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin() const
{
	return this->c.cbegin();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend() const
{
	return this->c.cend();
}

/** reverse iterators */
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::rend()
{
	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::crbegin() const
{
	return this->c.crbegin();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::crend() const
{
	return this->c.crend();
}
