/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:13 by hloki             #+#    #+#             */
/*   Updated: 2022/06/08 01:05:03 by hloki            ###   ########.fr       */
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
		Brain	*getBrain() const;
	private:
		Brain	*brain;
};

#endif