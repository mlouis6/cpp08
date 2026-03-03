/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:14 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/03 16:33:05 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>

// template <typename T>
typedef struct t_iterator
{
	void*	iterator;
}	s_iterator;

template <typename T>
class MutantStack
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
		// typename MutantStack<T>::iterator		begin() const;
		// // typename T::const_iterator	begin() const;
		// typename MutantStack<T>::iterator		end() const;
		// // typename T::const_iterator	end() const;
		T*		begin() const;
		T*		end() const;
		// T*		iterator;
		s_iterator iterator;
	private:
		std::stack<T>	m_stack;
};

#include "MutantStack.tpp"

#endif
