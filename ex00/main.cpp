/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:29:46 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/22 13:53:04 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int	main()
{
	/** LIST */
	std::cout << "====== LIST ======" << std::endl;
	std::list<int>	lst;

	lst.push_back(5);
	lst.push_back(8);
	lst.push_back(9);
	lst.push_back(18);
	lst.push_back(-6);
	lst.push_back(0);
	lst.push_back(2);
	try
	{
		std::list<int>::const_iterator	found1 = easyfind(lst, 8);
		std::cout << "f1 = " << *found1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try
	{
		std::list<int>::const_iterator	found2 = easyfind(lst, -8);
		std::cout << "f2 = " << *found2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	/** VECTOR */
	std::cout << "\n====== VECTOR ======" << std::endl;
	std::vector<int>	vec;

	vec.push_back(5);
	vec.push_back(8);
	vec.push_back(9);
	vec.push_back(18);
	vec.push_back(-6);
	vec.push_back(0);
	vec.push_back(2);
	try
	{
		std::vector<int>::const_iterator	found1 = easyfind(vec, 8);
		std::cout << "f1 = " << *found1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try
	{
		std::vector<int>::const_iterator	found2 = easyfind(vec, -8);
		std::cout << "f2 = " << *found2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
