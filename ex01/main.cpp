/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:54:16 by hloki             #+#    #+#             */
/*   Updated: 2022/06/08 01:09:05 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.h"

int	main()
{
	// Animal	a;
	// Dog		dog;
	// Cat		cat;

	// a.makeSound();
	// dog.makeSound();
	// cat.makeSound();

	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();
	cout << j->getBrain()->getIdea(1) << endl;
	j->getBrain()->setIdea("first");
	j->getBrain()->setIdea("I love my owner <3");
	i->getBrain()->setIdea("КОЖАННЫЕ МЕШКИ опять не покормили");
	cout << "\nDog's brain: " << j->getBrain()->getIdea(1) << endl;
	cout << "\nCat's brain: " << i->getBrain()->getIdea(0) << endl;

	i = j;
	cout << "\nDog's brain: " << i->getBrain()->getIdea(1) << endl;
	delete j;
	delete i;
	// delete meta;
	
}