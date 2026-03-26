/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:14 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/26 17:02:37 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <deque>
# include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
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
		
	private:
		std::stack<T, Container>	m_stack;
};

#include "MutantStack.tpp"

#endif
