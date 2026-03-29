/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:14 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/29 11:14:32 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <deque>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		
		MutantStack();
		MutantStack(int);
		MutantStack(const MutantStack& other);
		MutantStack&	operator=(const MutantStack& other);
		~MutantStack();

		// void			push(const T& t);
		// void			pop();
		// const T&		top() const;
		// unsigned int	size() const;
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		
		iterator		begin();
		iterator		end();
		const_iterator	cbegin() const;
		const_iterator	cend() const;

		iterator		rbegin();
		iterator		rend();
		const_iterator	crbegin() const;
		const_iterator	crend() const;
};

#include "MutantStack.tpp"

#endif
