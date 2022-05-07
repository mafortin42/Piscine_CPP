/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:05:25 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/07 11:14:33 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat& operator=(const Bureaucrat&);
	int	getGrade() const;
	const std::string& getName() const;
	void	increaseGrade(int amount);
	void	decreaseGrade(int amount);
	void	signForm(AForm&) const;
	void	executeForm(AForm const & form);
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
private:
	const std::string name;
	int		grade;
	void	verifyGrade();
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat&);
