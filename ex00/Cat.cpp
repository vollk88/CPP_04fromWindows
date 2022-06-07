/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:07 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 00:22:36 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
	cout << YELLOW_C "Cat constructor called" END_C << endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &obj)
{
	cout << YELLOW_C "Cat constructor called" END_C << endl;
	*this = obj;
}

Cat::~Cat()
{
	cout << LRED_C "Cat destructor called" END_C << endl;
}

Cat& Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	return (*this);
}

void Cat::makeSound() const
{
	cout << LGREEN_C "CAT: Myawk" END_C << endl;
}

string Cat::getType() const
{
	return this->type;
}
