/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:05 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 00:25:40 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "Colors.hpp"

using std::string;
using std::cout;
using std::endl;

class Animal
{
	public:
		Animal();
		Animal(const Animal &obj);
		virtual ~Animal();
		Animal			operator=(Animal const &obj);
		virtual void	makeSound() const;
		string			getType() const;
	protected:
		string	type;
};

#endif