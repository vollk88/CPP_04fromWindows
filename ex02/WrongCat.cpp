/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:28:54 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 18:28:58 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat()
{
	cout << YELLOW_C "WrongCat constructor called" END_C << endl;
	this->type = "Cat";
}

WrongCat::~WrongCat()
{
	cout << RED_C "WrongCat destructor called" END_C << endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	cout << YELLOW_C "WrongCat constructor called" END_C << endl;
	*this = obj;
}

WrongCat WrongCat::operator=(const WrongCat &obj)
{
	this->type = obj.type;
	return *this;
}

void WrongCat::makeSound() const {
	cout << "WrongCat: !@#$$%%%$*@(@$&" << endl;
}
