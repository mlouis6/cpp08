/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:22 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/10 12:28:22 by mlouis           ###   ########.fr       */
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

template <typename T>
T*	MutantStack<T>::begin() 
{
	return m_stack.begin();
	// return (&m_stack.top() -  m_stack.size() + 1);
}

template <typename T>
T*	MutantStack<T>::end()
{
	// return &m_stack + m_stack.size();
	return (&m_stack.top() + 1);
}

// template <typename T>
// typename std::deque<T>::iterator	MutantStack<T>::begin() 
// {
// 	// iterator = &m_stack.begin();
// 	return &m_stack.begin();
// }

// template <typename T>
// typename std::deque<T>::iterator	MutantStack<T>::end()
// {
// 	// iterator = &m_stack.end();
// 	return (&m_stack.end());
// }

//TODO: check empty()

//TODO: create vector where address is add after each push (using top())
//TODO: will need to update accordingly in pop
