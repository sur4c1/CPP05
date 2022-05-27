/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:07:51 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:57 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/***********************
*	Constructors & Destructor
***********************/

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Intern	&Intern::operator=(Intern const &src)
{
	(void) src;
	return (*this);
}

/***********************
*	Boolean Operators
***********************/

/***********************
*	Arithmetic Operators
***********************/

/***********************
*	Stream Operators
***********************/

/***********************
*	Getter & Setters
***********************/

/***********************
*	Methods
***********************/

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm *form = nullptr;
	for (int i = 0; i < 3; i++) {
		if (name == this->form_name[i])
		{
			form = this->form_func[i](target);
			std::cout << "Intern creates " << *form << std::endl;
			return (form);
		}
	}
	std::cout << "\e[38;5;1mIntern miserably failed to create unexistant form "
		<< name << "......\e[39m" << std::endl;
	return (nullptr);
}

AForm	*Intern::f_presidential_pardon(std::string target)
{
	AForm	*res = new PresidentialPardonForm(target);

	return (res);
}

AForm	*Intern::f_robotomy_request(std::string target)
{
	AForm	*res = new RobotomyRequestForm(target);

	return (res);}

AForm	*Intern::f_shrubbery_creation(std::string target)
{
	AForm	*res = new ShrubberyCreationForm(target);

	return (res);}

/***********************
*	Statics
***********************/

std::string Intern::form_name[]
	= {"presidential pardon", "robotomy request", "shrubbery creation"};
Intern::f_form Intern::form_func[]
	= {Intern::f_presidential_pardon, Intern::f_robotomy_request,
		Intern::f_shrubbery_creation};
