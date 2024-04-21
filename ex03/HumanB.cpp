/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:56:01 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 13:27:31 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const name): _name(name){
	this->_weapon = NULL;
}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

void HumanB::attack(void){
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with their bare hands" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;

}