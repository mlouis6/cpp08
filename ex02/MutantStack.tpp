/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:22 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/26 17:02:53 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{

}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(int)
{

}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other)
{
	(void)(other);
}

template <typename T, typename Container>
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(const MutantStack& other)
{
	(void)(other);
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{

}


template <typename T, typename Container>
void	MutantStack<T, Container>::push(const T& t)
{
	m_stack.push(t);
}

template <typename T, typename Container>
void	MutantStack<T, Container>::pop()
{
	m_stack.pop();
}

template <typename T, typename Container>
const T&	MutantStack<T, Container>::top() const
{
	return m_stack.top();
}

template <typename T, typename Container>
unsigned int	MutantStack<T, Container>::size() const
{
	return m_stack.size();
}

template <typename T, typename Container>
T*	MutantStack<T, Container>::begin() 
{
	return m_stack.begin();
}

template <typename T, typename Container>
T*	MutantStack<T, Container>::end()
{
	// return &m_stack + m_stack.size();
	return (&m_stack.top() + 1);
}

//TODO: check empty()
