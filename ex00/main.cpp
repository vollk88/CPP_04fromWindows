/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:54:16 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 00:25:56 by hloki            ###   ########.fr       */
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

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	WrongCat a;
	a.makeSound();
}