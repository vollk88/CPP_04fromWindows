//
// Created by PrimeGames on 07.06.2022.
//

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include "Colors.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	~WrongAnimal();
	WrongAnimal			operator=(WrongAnimal const &obj);
	void			makeSound() const;
	string			getType() const;
protected:
	string	type;
};


#endif
