/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:16:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/21 10:31:44 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	int N = 42;
	Zombie* ZombHorde = zombieHorde(N, "crazyZomb");

	delete [] ZombHorde;
	
	return 0;
}