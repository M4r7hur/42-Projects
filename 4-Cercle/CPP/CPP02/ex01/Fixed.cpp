/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 20:29:37 by armendes          #+#    #+#             */
/*   Updated: 2022/05/02 20:51:48 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_nb_of_bytes = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
	return ;
}

Fixed::Fixed(const Fixed &T)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = T;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &T)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this == &T)
		return (*this);
	this->_nb = T.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}