/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:14 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/10 15:55:55 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <deque>
# include <iterator>
// template <typename T>
// typedef struct t_iterator
// {
// 	void*	iterator;
// }	s_iterator;

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T> //, std::deque<T> >
{
	public:
		MutantStack();
		MutantStack(int);
		MutantStack(const MutantStack& other);
		MutantStack&	operator=(const MutantStack& other);
		~MutantStack();

		void						push(const T& t);
		void						pop();
		const T&					top() const;
		unsigned int				size() const;
		// typename std::deque<T>::iterator		begin();
		// typename std::deque<T>::iterator		end();
		T*		begin();
		T*		end();
		// struct iterator
		// {
		// 	public:
		// 		T*	ptr;

		// 		iterator(T* p) : ptr(p) {}
		// 		bool operator!=(const iterator& rhs)
		// 		{
		// 			if (ptr != rhs.ptr)
		// 				return true;
		// 			return false;
		// 		}

		// 		T operator*()
		// 		{
		// 			return (*ptr);
		// 		}

		// 		void operator++()
		// 		{
		// 			ptr = ptr + 1;
		// 		}
		// 		void operator--()
		// 		{
		// 			ptr = ptr - 1;
		// 		}
		// };
		// static typename std::vector<T>::iterator	iterator;
	private:
		std::stack<T>	m_stack;
};

#include "MutantStack.tpp"

#endif
