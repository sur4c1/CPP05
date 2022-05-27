/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot  <bguyot @student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:32:28 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/26 12:37:04 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

class Bureaucrat;

class AForm
{
	protected:
		class GradeTooLowExeption : public std::exception
		{
			const char	*what() const throw();
		};

		class GradeTooHighExeption : public std::exception
		{
			const char	*what() const throw();
		};

	private:
		const std::string	name;
		bool				is_signed;
		const int			gradeToSign;
		const int			gradeToExecute;

	public:
		AForm(void);
		AForm(AForm const &src);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm(void);

		AForm &operator=(AForm const &ref);

		int					getExecuteGrade(void) const;
		int					getSignGrade(void) const;
		const std::string	getName(void) const;

		bool				isSigned(void) const;
		void				beSigned(Bureaucrat signer);
		virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &o, AForm const &f);

#endif
