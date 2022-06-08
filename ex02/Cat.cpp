/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:07 by hloki             #+#    #+#             */
/*   Updated: 2022/06/08 00:47:28 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
	cout << YELLOW_C "Cat constructor called" END_C << endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &obj)
{
	cout << YELLOW_C "Cat constructor called" END_C << endl;
	*this = obj;
	this->brain = new Brain(*obj.brain);
}

Cat::~Cat()
{
	cout << LRED_C "Cat destructor called" END_C << endl;
	delete this->brain;
}

Cat& Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	delete this->brain;
	this->brain = new Brain(*obj.brain);
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

Brain* Cat::getBrain() const
{
	return this->brain;
}
