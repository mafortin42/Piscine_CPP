/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:06:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/03 12:50:07 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(){
	this->name = "John Doe";
	this->grade = 42;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy){
	*this = cpy;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade){
	verifyGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs){
	this->name = rhs.name;
	this->grade = rhs.grade;
	return *this;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

const std::string& Bureaucrat::getName() const{
	return this->name;
}

void	Bureaucrat::incrementGrade(int amount){
	this->grade -= amount;
	verifyGrade();
}

void	Bureaucrat::decreaseGrade(int amount){
	this->grade += amount;
	verifyGrade();
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
				return ("Grade cannot be lower than 150. Grade set to min value");
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
				return ("Grade cannot be higher than 1. Grade set to max value");
}

void Bureaucrat::verifyGrade(){
	if (this->grade > 150){
		this->grade = 150;
		throw GradeTooLowException();
	}
	if (this->grade < 1){
		this->grade = 1;
		throw GradeTooHighException();
	}
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& out){
	stream << out.getName() << ", bureaucrat grade " << out.getGrade();
	return stream;
}
