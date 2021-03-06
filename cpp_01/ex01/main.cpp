/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:00:09 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/01 17:33:24 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int		N;
	std::string	input_number;
	std::string	input_name;

	std::cout << "Please enter a number of Zombie :" << std::endl;
	getline(std::cin, input_number);
	N = atoi(input_number.c_str());
	std::cout << "Please enter a Zombie name" << std::endl;
	getline(std::cin, input_name);
	Zombie *horde = zombieHorde(N, input_name);
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
