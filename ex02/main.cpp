/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:59:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:41 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

int main(void)
{
	std::cout << "< May the Bureaucratie (and forms) artificial nightmare begin >"
		<< std::endl << std::endl;
	try
	{
		Bureaucrat jeanne("Michelle", 150);
		Bureaucrat bob("Micheline", 1);
		std::cout << jeanne << std::endl;
		AForm *f1 = new ShrubberyCreationForm("Jardin");
		bob.signForm(*f1);
		jeanne.executeForm(*f1);
		std::cout << *f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jeanne("Michelle2", 1);
		Bureaucrat bob("Micheline2", 1);
		std::cout << jeanne << std::endl;
		AForm *f1 = new ShrubberyCreationForm("Jardin 2");
		bob.signForm(*f1);
		jeanne.executeForm(*f1);
		std::cout << *f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jeanne("Carole", 150);
		Bureaucrat bob("Caroline", 1);
		std::cout << jeanne << std::endl;
		AForm *f1 = new PresidentialPardonForm("Xavier Dupont de Ligonnes");
		bob.signForm(*f1);
		jeanne.executeForm(*f1);
		std::cout << *f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jeanne("Carole2", 1);
		Bureaucrat bob("Caroline2", 1);
		std::cout << jeanne << std::endl;
		AForm *f1 = new PresidentialPardonForm("Xavier Dupont de Ligonnes 2");
		bob.signForm(*f1);
		jeanne.executeForm(*f1);
		std::cout << *f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jeanne("Sophie", 150);
		Bureaucrat bob("Syphilis", 1);
		std::cout << jeanne << std::endl;
		AForm *f1 = new RobotomyRequestForm("Bender");
		bob.signForm(*f1);
		jeanne.executeForm(*f1);
		std::cout << *f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jeanne("Sophie2", 1);
		Bureaucrat bob("Syphilis2", 1);
		std::cout << jeanne << std::endl;
		AForm *f1 = new RobotomyRequestForm("Bender 2");
		bob.signForm(*f1);
		jeanne.executeForm(*f1);
		std::cout << *f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}
