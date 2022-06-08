/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:28:49 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 18:28:52 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
