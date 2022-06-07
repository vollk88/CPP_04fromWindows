//
// Created by PrimeGames on 07.06.2022.
//

#ifndef CPP_04_WRONGCAT_H
#define CPP_04_WRONGCAT_H
#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &obj);
	~WrongCat();
	WrongCat operator=(const WrongCat &obj);
	string		getType();
	void		makeSound() const;
};


#endif //CPP_04_WRONGCAT_H
