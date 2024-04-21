/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 09:35:43 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 10:11:29 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Unknown Zombie is born." << std::endl;
	return ;
}

Zombie::~Zombie(){
	std::cout << this->_name << " is dead." << std::endl;
	return ;
}

void Zombie::setName(std::string name){
	this->_name = name;
	return ;
}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}