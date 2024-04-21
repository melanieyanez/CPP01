/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:56:16 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 13:25:35 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon{
	public:
		Weapon(std::string const type);
		~Weapon(void);
		void		setType(std::string type);
		std::string &getType(void);
		
	private:
		std::string	_type;
};

#endif