/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:29:00 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 18:29:09 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H
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


#endif
