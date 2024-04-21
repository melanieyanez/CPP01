/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:55:55 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 11:32:13 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon& weapon): _name(name), _weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack(void){
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}