/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:09:17 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/27 18:54:33 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;


	// Span spR = Span(4);
	// try
	// {
	// 	spR.addRange(sp.begin(), sp.end());
	// }
	// catch (const std::exception& e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }

	// for (unsigned int i = 0 ; i < spR.size() ; ++i)
	// {
	// 	try
	// 	{
	// 		std::cout << spR.getDatas()[i] << " ";
	// 	}
	// 	catch (const std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what();
	// 		break ;
	// 	}
	// }
	std::cout << std::endl;
	return (0);
}
