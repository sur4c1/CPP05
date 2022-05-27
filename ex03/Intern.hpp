/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:07:54 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:58 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>

class AForm ;

class Intern
{
	private:
		typedef AForm*(*f_form)(std::string target);

		static std::string form_name[];
		static f_form form_func[];

		static AForm *f_presidential_pardon(std::string target);
		static AForm *f_robotomy_request(std::string target);
		static AForm *f_shrubbery_creation(std::string target);

	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern &operator=(Intern const &ref);

		AForm	*makeForm(std::string name, std::string target);
};

#endif
