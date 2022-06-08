/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:05 by hloki             #+#    #+#             */
/*   Updated: 2022/06/08 01:13:40 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "../../tmp/ex01/Brain.h"
#include "../../tmp/ex01/Colors.hpp"

using std::string;
using std::cout;
using std::endl;

class Animal
{
	public:
		Animal();
		Animal(const Animal &obj);
		virtual ~Animal();
		virtual Animal	&operator=(Animal const &obj);
		virtual void	makeSound() const;
		virtual string			getType() const;
		virtual Brain	*getBrain() const = 0;
	protected:
		string	type;
};

#endif