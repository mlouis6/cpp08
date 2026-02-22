/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 13:55:43 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/22 15:03:31 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
	public:
		Span(unsigned int size);
		Span(const Span& other);
		Span&	operator=(const Span& other);
		~Span();

		void			addNumber(int nb);
		int				shortestSpan() const;
		int				longestSpan() const;
		void			addRange(unsigned int pos, int* toAdd);
		int*			getDatas() const;
		int				getData(unsigned int pos) const;
		unsigned int	size() const;

	private:
		Span();
		unsigned int		_size;
		int*				_data;
		unsigned int		_idx;

};

#endif
