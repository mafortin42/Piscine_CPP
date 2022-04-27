/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:09:42 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/27 14:40:36 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal"){
	std::cout << "ABSTRACT animal default constructor" << std::endl; 
}

Animal::Animal(const Animal& other){
	*this = other;
	std::cout << "ABSTRACT animal copy constructor" << std::endl; 
}

Animal& Animal::operator=(const Animal& rhs){
	(void)rhs;
	std::cout << "ABSTRACT animal copy assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal(){
	std::cout << "ABSTRACT animal destructor called." << std::endl;
}

std::string	Animal::getType() const{
	return this->type;
}

void	Animal::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound:\nComplete silence." << std::endl;
}

void	Animal::giveIdea(char **argv){
	(void)argv;
	std::cout << "I cant have my own ideas because i'm just an Animal" << std::endl;
}

void	Animal::printIdea() const{
	std::cout << "I have no idea because i'm just an Animal" << std::endl;
}
