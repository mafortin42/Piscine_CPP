/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:09:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/27 13:08:35 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal
{
public:
	Animal();
	Animal(const Animal&);
	Animal& operator=(const Animal&);
	virtual ~Animal();
	virtual	void	makeSound() const;
	virtual std::string	getType() const;
	virtual void	giveIdea(char **argv);
	virtual void	printIdea() const;
protected:
	std::string type;
};
