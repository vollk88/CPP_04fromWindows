//
// Created by PrimeGames on 07.06.2022.
//

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
