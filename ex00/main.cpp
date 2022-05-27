/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:59:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:11 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main(void)
{
	std::cout << "< May the Bureaucratie artificial nightmare begin >"
		<< std::endl << std::endl;

	Bureaucrat jean;
	std::cout << jean << std::endl;

	try
	{
		Bureaucrat jeanne("Michelle", 169);
		std::cout << jeanne << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jacky("BoB", 69);
		std::cout << jacky << std::endl;
		jacky.incrementGrade();
		std::cout << jacky << std::endl;
		jacky.decrementGrade();
		std::cout << jacky << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		Bureaucrat fake_egirl("Samantha", 2);
		std::cout << fake_egirl << std::endl;
		fake_egirl.incrementGrade();
		std::cout << fake_egirl << std::endl;
		fake_egirl.incrementGrade();
		std::cout << fake_egirl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}




	return 0;
}
