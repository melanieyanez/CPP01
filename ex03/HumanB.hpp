/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:56:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 13:35:59 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB{
	public:
		HumanB(std::string const name);
		~HumanB(void);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
	private:
		std::string	const _name;
		Weapon	*_weapon;
};

#endif