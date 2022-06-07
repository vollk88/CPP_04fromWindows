/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:08 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 00:22:23 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &obj);
		~Cat();
		Cat		&operator=(const Cat &obj);
		void	makeSound() const;
		string	getType() const;
};

#endif