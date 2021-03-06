/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:18:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/04 13:32:09 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("dog"){
	std::cout << "Dog default constructor" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal("dog"){
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor" << std::endl; 
}

Dog& Dog::operator=(const Dog& rhs){
	
	if (this != &rhs)
	{
		delete this->brain;
		this->type = rhs.type;
		this->brain = new Brain(*rhs.brain);
		std::cout << "Dog copy assignment operator called" << std::endl;
	}
	return *this;
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog destructor called." << std::endl;
}

std::string	Dog::getType() const{
	return this->type;
}

void	Dog::giveIdea(char **argv){
	int j = 0;
	for (int i = 1; argv[i]; i++){
		std::string current(argv[i]);
		this->brain->ideas[j] = current;
		j++;
		if (j == 99)
		{
			this->brain->ideas[j] = "";
			break ;
		}
		if (!argv[i + 1])
			this->brain->ideas[j] = "";
	}
}

void	Dog::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound :\nWoof woof" << std::endl;
}

void	Dog::printIdea() const{
	for(int i = 0; !this->brain->ideas[i].empty(); i++)
		std::cout << this->brain->ideas[i] << std::endl;
}
