/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:03 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 00:23:23 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	cout << YELLOW_C "Animal constructor called" END_C << endl;
}

Animal::~Animal()
{
	cout << LRED_C "Animal destructor called" END_C << endl;
}

Animal::Animal(const Animal &obj)
{
	cout << YELLOW_C "Animal constructor called" END_C << endl;
	*this = obj;
}

Animal	Animal::operator=(Animal const &obj)
{
	if (this == &obj) return (*this);
	this->type = obj.type;
	return (*this);
}

void	Animal::makeSound() const
{
	cout << "** Animal defaut sound **" << endl;
}

string Animal::getType() const { return this->type; }
