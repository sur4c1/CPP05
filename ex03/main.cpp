/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:59:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:15:00 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

int main(void)
{
	std::cout << "< May the Bureaucratie (and forms ((and interns))) artificial nightmare begin >"
		<< std::endl << std::endl;

	Intern random;

	AForm *f1 = random.makeForm("presidential pardon", "Billy");
	std::cout << *f1 << std::endl;
	std::cout << std::endl;
	AForm *f2 = random.makeForm("robotomy request", "Jean-billy");
	std::cout << *f2 << std::endl;
	std::cout << std::endl;
	AForm *f3 = random.makeForm("brain plantation", "Marie-bernadette");
	if (f3)
		std::cout << *f3 << std::endl;
	else
		std::cout << "[ No form to cout ]" << std::endl;
	std::cout << std::endl;
	AForm *f4 = random.makeForm("shrubbery creation", "Pouet");
	std::cout << *f4 << std::endl;
	std::cout << std::endl;
	delete f1;
	delete f2;
	delete f3;
	delete f4;
	return 0;
}
