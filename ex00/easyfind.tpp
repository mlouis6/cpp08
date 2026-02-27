/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:31:13 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/27 15:46:51 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <stdexcept>
#include <algorithm>

template <typename T>
typename T::const_iterator	easyfind(const T& t, int val)
{
	typename T::const_iterator	it = std::find(t.begin(), t.end(), val);
	if (it != t.end())
		return (it);
	throw std::runtime_error("No occurence found");
}

template <typename T>
typename T::iterator	easyfind(T& t, int val)
{
	typename T::iterator	it = std::find(t.begin(), t.end(), val);
	if (it != t.end())
		return (it);
	throw std::runtime_error("No occurence found");
}
