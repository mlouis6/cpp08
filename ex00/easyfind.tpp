/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:31:13 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/23 13:15:37 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <stdexcept>
#include <algorithm>

template <typename T>
const typename T::const_iterator&	easyfind(const T& t, int val)
{
	typename T::const_iterator*	t2 = new typename T::const_iterator;
	*t2 = std::find(t.begin(), t.end(), val);
	if (*t2 != t.end())
		return (*t2);

	throw std::runtime_error("No occurence found");
}

template <typename T>
typename T::const_iterator&	easyfind(T& t, int val)
{
	typename T::const_iterator*	t2 = new typename T::const_iterator;
	*t2 = std::find(t.begin(), t.end(), val);
	if (*t2 != t.end())
		return (*t2);

	throw std::runtime_error("No occurence found");
}
