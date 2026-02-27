/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 13:55:43 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/27 18:49:33 by mlouis           ###   ########.fr       */
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
		int									shortestSpan() const;
		int									longestSpan() const;
		void								addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		std::vector<int>					getDatas() const;
		// int									getData(unsigned int pos) const;
		unsigned int						size() const;
		std::vector<int>::const_iterator	begin() const;
		std::vector<int>::const_iterator	end() const;

	private:
		Span();
		unsigned int					m_size;
		std::vector<int>					m_data;
		std::vector<int>::iterator		m_idx;

};

#endif
