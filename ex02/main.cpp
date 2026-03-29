/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:38:39 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/29 12:07:09 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <iterator>
#include <deque>
#include <list>

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top (17): " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size (1): " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// for (unsigned i = 0 ;  i < 380 ; ++i)
	// 	mstack.push(4);
	mstack.push(0);

	{
		std::cout << "NORMAL ITERATOR (stack)" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		std::cout << "print (5, 3, 5, 737, 0)" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::stack<int> s(mstack);

	{
		std::cout << "\nREVERSE ITERATOR" << std::endl;
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		
		++it;
		--it;
		std::cout << "print (0, 737, 5, 3, 5)" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << "\nCONST ITERATOR" << std::endl;
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();
		
		++it;
		--it;
		std::cout << "print (5, 3, 5, 737, 0)" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	mlist.pop_back();

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	// for (unsigned i = 0 ;  i < 380 ; ++i)
	// 	mlist.push_back(4);
	mlist.push_back(0);


	{
		std::cout << "\nNORMAL ITERATOR (list)" << std::endl;
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		
		++it;
		--it;
		std::cout << "print (5, 3, 5, 737, 0)" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	return (0);
}
