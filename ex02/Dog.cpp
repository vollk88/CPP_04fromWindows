/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:09 by hloki             #+#    #+#             */
/*   Updated: 2022/06/08 00:46:48 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	cout << YELLOW_C "Dog constructor called" END_C << endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &obj)
{
	cout << YELLOW_C "Dog constructor called" END_C << endl;
	*this = obj;
	this->brain = new Brain(*obj.brain);
}

Dog::~Dog()
{
	cout << LRED_C "Dog destructor called" END_C << endl;
	delete this->brain;
}

Dog&	Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	delete this->brain;
	this->brain = new Brain(*obj.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	cout << LGREEN_C "DOG: Auuuf!" END_C << endl;
}

string	Dog::getType() const
{
	return this->type;
}

Brain*	Dog::getBrain() const
{
	return this->brain;
}