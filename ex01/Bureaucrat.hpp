/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:00:36 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/27 08:14:13 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Form ;

class Bureaucrat
{
	class GradeTooHighExeption : public std::exception
	{
		const char	*what() const throw();
	};

	class GradeTooLowExeption : public std::exception
	{
			const char	*what() const throw();
	};

	private:
		const std::string	name;
		int					grade;

	protected:

	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &ref);

		int					getGrade(void) const;
		const std::string	getName(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form form);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b);

#endif
