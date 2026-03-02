/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 13:55:43 by mlouis            #+#    #+#             */
/*   Updated: 2026/03/02 11:15:06 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
class Span
{
	public:
		Span(unsigned int size);
		Span(const Span& other);
		Span&	operator=(const Span& other);
		~Span();

		void								addNumber(int nb);
		long								shortestSpan() const;
		long								longestSpan() const;
		void								addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		int									operator[](unsigned int pos);
		unsigned int						size() const;
		unsigned int						getCapacity() const;
		std::vector<int>::const_iterator	begin() const;
		std::vector<int>::const_iterator	end() const;

	private:
		Span();
		unsigned int		m_capacity;
		std::vector<int>	m_data;

};

#endif
