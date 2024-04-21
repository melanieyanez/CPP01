/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:17:23 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 10:34:30 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){
	Zombie*	Zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Zombies[i].setName(name);
		//std::cout << i << " ";
		Zombies[i].announce();
	}
	return Zombies;
};
