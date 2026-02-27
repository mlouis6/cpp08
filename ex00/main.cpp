/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:29:46 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/27 16:01:13 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int	main()
{
	/** LIST */
	std::cout << "======= LIST =======" << std::endl;
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
		std::list<int>::iterator	it = easyfind(lst, 8);
		std::cout << "it1 = " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::list<int>::const_iterator	it = easyfind(lst, -6);
		std::cout << "it2 = " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	int tmp[] = {5, 8, 9, 10, -6, 0, 2};
	const std::list<int>	lst2(tmp, tmp + 7);
	try
	{
		std::list<int>::const_iterator	it = easyfind(lst2, -8);
		std::cout << "it3 = " << *it << std::endl;
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
		std::vector<int>::iterator	it = easyfind(vec, 8);
		std::cout << "it1 = " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::const_iterator	it = easyfind(vec, -6);
		std::cout << "it2 = " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	const std::vector<int>	vec2(vec);
	try
	{
		std::vector<int>::const_iterator	it = easyfind(vec2, -8);
		std::cout << "it3 = " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	/** STRING */
	std::cout << "\n====== STRING ======" << std::endl;
	std::string str("58918-602");

	try
	{
		std::string::iterator	it = easyfind(str, '8');
		std::cout << "it1 = " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::string::const_iterator	it = easyfind(str, '-');
		std::cout << "it2 = " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	const std::string	str2(str);
	try
	{
		std::string::const_iterator	it = easyfind(str2, 'p');
		std::cout << "it3 = " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}
