/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:13 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 00:21:13 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &obj);
		~Dog();
		Dog		&operator=(const Dog &obj);
		void	makeSound() const;
		string	getType() const;
};

#endif