/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:13:58 by hloki             #+#    #+#             */
/*   Updated: 2022/06/07 18:57:03 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
#include <iostream>
#include "Colors.hpp"

using std::string;
using std::cout;
using std::endl;
class Brain
{
	public:
		Brain();
		Brain(const Brain &obj);
		virtual ~Brain();
		string	getIdea(int index);
		void	setIdea(const string idea);
	private:
		string	ideas[100];
};

#endif