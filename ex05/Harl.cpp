/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:04:29 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 15:44:29 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void){
	_levels["DEBUG"] = &Harl::_debug;
	_levels["INFO"] = &Harl::_info;
	_levels["WARNING"] = &Harl::_warning;
	_levels["ERROR"] = &Harl::_error;
}

Harl::~Harl(void){}


void	Harl::complain(std::string level){
	if (_levels.find(level) != _levels.end())
		(this->*_levels[level])();
	else
		std::cout << "I don't understand \"" << level << "\"." << std::endl;
}

void	Harl::_debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void){
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}	