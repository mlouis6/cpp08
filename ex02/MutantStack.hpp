/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:39:14 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/22 15:46:46 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

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
		T&							top();
		unsigned int				size();
		MutantStack<T>::iterator	begin();
		MutantStack<T>::iterator	end();
	private:

};

#include "MutantStack.tpp"

#endif
