/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 09:30:32 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 10:19:29 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
public:
	Zombie();
	~Zombie();
	void		setName(std::string name);
	void		announce(void);
private:
	std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif