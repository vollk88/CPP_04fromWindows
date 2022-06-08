/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:13:54 by hloki             #+#    #+#             */
/*   Updated: 2022/06/08 01:03:24 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
	cout << BLBLUE_C "Brain constructor is called" END_C << endl;
}

Brain::Brain(const Brain &obj)
{
	cout << BLBLUE_C "Brain constructor is called" END_C << endl;
	*this = obj;
}

Brain::~Brain()
{
	cout << "Brain destructor is called" << endl;
}

string Brain::getIdea(int index)
{
	if (!this->ideas[index].empty())
		return this->ideas[index];
	else 
		return (ORNGE_C "~> No idea in this brain" END_C);
}

void	Brain::setIdea(const string idea)
{
	size_t	i = 0;
	// cout << ideas->length() << endl;
	while (!ideas[i].empty())
		i++;
	if (ideas->length() > i || !ideas->length())
		ideas[i] = idea;
	else
		cout << RED_C "So more ideas for my little brain" END_C << endl;
}
