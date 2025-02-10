/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:59:26 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 17:25:09 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"


int main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "The memory address of the string varaible " << &s << std::endl;
	std::cout << "The memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF " << &stringREF << std::endl;

	std::cout << "The value of the string variable " << s << std::endl;
	std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF " << stringREF << std::endl;

	return (0);
}
