/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:56:41 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 13:35:29 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA{
	public:
		HumanA(std::string const name, Weapon &weapon);
		~HumanA();
		void	attack(void);
	private:
		std::string	const _name;
		Weapon	&_weapon;
};

#endif