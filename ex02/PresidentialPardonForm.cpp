/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:52:08 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:42 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/***********************
*	Constructors & Destructor
***********************/

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm("Presidential Pardon Default Form", 25, 5),
	target("You")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm
	(PresidentialPardonForm const &src):
	AForm("Presidential Pardon Default Form", 25, 5),
	target(src.target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	AForm("Presidential Pardon Default Form", 25, 5),
	target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

PresidentialPardonForm	&PresidentialPardonForm::operator=
	(PresidentialPardonForm const &src)
{
	this->target = src.target;
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

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade() || !this->isSigned())
		throw GradeTooLowExeption();
	std::cout << this->target << " got pardoned by Zaphod Beeblebrox."
		<< std::endl;
}
