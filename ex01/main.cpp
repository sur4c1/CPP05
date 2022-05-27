/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:59:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:54 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main(void)
{
	std::cout << "< May the Bureaucratie (and form) artificial nightmare begin >"
		<< std::endl << std::endl;
	try
	{
		Bureaucrat jeanne("Michelle", 129);
		std::cout << jeanne << std::endl;
		Form f1("Inscription au cours de B.D.S.M. (Big Data Security Managment)", 100, 100);
		jeanne.signForm(f1);
		f1.beSigned(jeanne);
		std::cout << f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat BoB("BoB", 1);
		std::cout << BoB << std::endl;
		Form f1("Creation du cour de Twerk Spacial", 100, 100);
		BoB.signForm(f1);
		f1.beSigned(BoB);
		std::cout << f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form f1;
		std::cout << f1 << std::endl;
		Form f2("Override permission", 0, 500);
		std::cout << f2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}
