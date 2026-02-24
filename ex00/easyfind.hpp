/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:30:11 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/24 08:16:54 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
typename T::const_iterator	easyfind(const T& t, int val);

template <typename T>
typename T::iterator	easyfind(T& t, int val);

# include <easyfind.tpp>

#endif
