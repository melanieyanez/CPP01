/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:55:44 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 13:25:11 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type){}

Weapon::~Weapon(void){}

void		Weapon::setType(std::string type){
	this->_type = type;
}

std::string &Weapon::getType(void){
	return this->_type;
}