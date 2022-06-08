/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:28:43 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 18:28:47 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	cout << YELLOW_C "WrongAnimal constructor called" END_C << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	cout << YELLOW_C "WrongAnimal constructor called" END_C << endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	cout << RED_C "WrongAnimal destructor called" END_C << endl;
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type = obj.type;
	return *this;
}

string WrongAnimal::getType() const
{
	return std::string();
}

void WrongAnimal::makeSound() const
{
	cout << "** WrongAnimal defaut sound **" << endl;
}

