/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:09:26 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 10:27:56 by mafortin         ###   ########.fr       */
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
	Animal(const std::string& type);
	virtual ~Animal();
	virtual	void	makeSound() const;
	virtual std::string	getType() const;
	virtual void	giveIdea(char **argv);
	virtual void	printIdea() const;
protected:
	std::string type;
};
