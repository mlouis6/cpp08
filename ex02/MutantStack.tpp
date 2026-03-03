/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:22 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/03 16:24:20 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
MutantStack<T>::MutantStack() // :  m_stack(0)
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


template <typename T>
void	MutantStack<T>::push(const T& t)
{
	m_stack.push(t);
}

template <typename T>
void	MutantStack<T>::pop()
{
	m_stack.pop();
}

template <typename T>
const T&	MutantStack<T>::top() const
{
	return m_stack.top();
}

template <typename T>
unsigned int	MutantStack<T>::size() const
{
	return m_stack.size();
}

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::begin() const
// {
// 	return (&m_stack[0]);
// }

// // template <typename T>
// // typename T::const_iterator	MutantStack<T>::begin() const
// // {

// // }

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::end() const
// {
// 	return (&m_stack[m_stack.size() - 1]);
// }

// // template <typename T>
// // typename T::const_iterator	MutantStack<T>::end() const
// // {

// // }


template <typename T>
T*	MutantStack<T>::begin() const
{
	return (&m_stack.begin());
}

template <typename T>
T*	MutantStack<T>::end() const
{
	return (&m_stack[m_stack.size() - 1]);
}
