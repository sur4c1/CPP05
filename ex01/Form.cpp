/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot  <bguyot @student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:32:43 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/25 15:33:13 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/***********************
*	Constructors & Destructor
***********************/

Form::Form(void):
	 name("Default"), is_signed(false), gradeToSign(150), gradeToExecute(150)
{
	return ;
}

Form::Form(Form const &src):
	name(src.name), is_signed(false),
	gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute):
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

Form::~Form(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Form	&Form::operator=(Form const &src)
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

std::ostream	&operator<<(std::ostream &o, Form const &f)
{
	return (o << "Form " << f.getName() << ", with grade " << f.getSignGrade()
		<< " required to be signed and grade " << f.getExecuteGrade()
		<< " required to be executed with the following signed status : "
		<< f.isSigned());
}

/***********************
*	Getter & Setters
***********************/

int			Form::getExecuteGrade(void) const
{
	return (this->gradeToExecute);
}

int			Form::getSignGrade(void) const
{
	return (this->gradeToSign);
}

const std::string	Form::getName(void) const
{
	return (this->name);
}

bool				Form::isSigned(void) const
{
	return(this->is_signed);
}


/***********************
*	Methods
***********************/

void				Form::beSigned(Bureaucrat signer)
{
	if (signer.getGrade() > gradeToSign)
		throw GradeTooLowExeption();
	this->is_signed = true;
}

/***********************
*	Exceptions
***********************/

const char	*Form::GradeTooLowExeption::what() const throw()
{
	return ("\e[38;5;1mGradeTooLowExeption : Grade too low :(\e[39m");
}

const char	*Form::GradeTooHighExeption::what() const throw()
{
	return ("\e[38;5;1mGradeTooHighExeption : Grade too high :)\e[39m");
}
