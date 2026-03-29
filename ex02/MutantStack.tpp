/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:22 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/29 11:10:45 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack()
{

}

template <typename T>
MutantStack<T>::MutantStack(int)
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other)
{
	(void)(other);
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& other)
{
	(void)(other);
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}


// template <typename T>
// void	MutantStack<T>::push(const T& t)
// {
// 	push(t);
// }

// template <typename T>
// void	MutantStack<T>::pop()
// {
// 	pop();
// }

// template <typename T>
// const T&	MutantStack<T>::top() const
// {
// 	return top();
// }

// template <typename T>
// unsigned int	MutantStack<T>::size() const
// {
// 	return size();
// }


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

//TODO: check constructor and cpy ctor
