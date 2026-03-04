/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:14 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/04 15:35:17 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
// template <typename T>
// typedef struct t_iterator
// {
// 	void*	iterator;
// }	s_iterator;

template <typename T>
class MutantStack : public std::stack<T>
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
		T*		begin();
		T*		end();
		struct iterator
		{
			public:
				T*	ptr;

				iterator(T* p) : ptr(p) {}
				bool operator!=(const iterator& rhs)
				{
					if (ptr != rhs.ptr)
						return true;
					return false;
				}

				T operator*()
				{
					return (*ptr);
				}

				void operator++()
				{
					ptr = ptr + 1;
				}
				void operator--()
				{
					ptr = ptr - 1;
				}
		};
	private:
		std::stack<T>	m_stack;
};

#include "MutantStack.tpp"

#endif
