/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:52:37 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:15:06 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

class Bureaucrat ;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm(std::string const &target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &ref);

		virtual void		execute(Bureaucrat const & executor) const;
};

#endif
