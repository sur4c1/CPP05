/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:32:43 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:34 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/***********************
*	Constructors & Destructor
***********************/

AForm::AForm(void):
	 name("Default"), is_signed(false), gradeToSign(150), gradeToExecute(150)
{
	return ;
}

AForm::AForm(AForm const &src):
	name(src.name), is_signed(false),
	gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
	return ;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute):
	name(name), is_signed(false), gradeToSign(gradeToSign),
	gradeToExecute(gradeToExecute)
{
	if (gradeToExecute > 150 || gradeToSign > 150)
	{
		throw GradeTooLowExeption();
	}
	if (gradeToExecute < 1 || gradeToSign < 1)
	{
		throw GradeTooHighExeption();
	}
	return ;
}

AForm::~AForm(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

AForm	&AForm::operator=(AForm const &src)
{
	this->is_signed = src.is_signed;
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

std::ostream	&operator<<(std::ostream &o, AForm const &f)
{
	return (o << "Form " << f.getName() << ", with grade " << f.getSignGrade()
		<< " required to be signed and grade " << f.getExecuteGrade()
		<< " required to be executed with the following signed status : "
		<< f.isSigned());
}

/***********************
*	Getter & Setters
***********************/

int			AForm::getExecuteGrade(void) const
{
	return (this->gradeToExecute);
}

int			AForm::getSignGrade(void) const
{
	return (this->gradeToSign);
}

const std::string	AForm::getName(void) const
{
	return (this->name);
}

bool				AForm::isSigned(void) const
{
	return(this->is_signed);
}


/***********************
*	Methods
***********************/

void				AForm::beSigned(Bureaucrat signer)
{
	if (signer.getGrade() > gradeToSign)
		throw GradeTooLowExeption();
	this->is_signed = true;
}

/***********************
*	Exceptions
***********************/

const char	*AForm::GradeTooLowExeption::what() const throw()
{
	return ("\e[38;5;1mGradeTooLowExeption : Grade too low :(\e[39m");
}

const char	*AForm::GradeTooHighExeption::what() const throw()
{
	return ("\e[38;5;1mGradeTooHighExeption : Grade too high :)\e[39m");
}
