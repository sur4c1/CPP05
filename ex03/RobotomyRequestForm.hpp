/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:52:28 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:15:05 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

class Bureaucrat ;

class RobotomyRequestForm : public AForm
{
	private:
		std::string	target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &ref);

		virtual void		execute(Bureaucrat const & executor) const;
};

#endif
