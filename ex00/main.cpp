/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 09:30:24 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 10:10:42 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie* newZomb = newZombie("ZombieHeap");
	
	randomChump("ZombieStack");

	delete newZomb;
	
	return 0;
}