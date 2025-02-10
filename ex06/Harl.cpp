/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:14:57 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 16:24:15 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	std::string d[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (!level.compare(d[i]))
		{
	 		break;
		}
		i++;
	}
	switch (i)
	{
		case 0:
			this->Harl::fnc = &Harl::debug;
			(this->*fnc)();
		case 1:
			this->Harl::fnc = &Harl::info;
			(this->*fnc)();
		case 2:
			this->Harl::fnc = &Harl::warning;
			(this->*fnc)();
		case 3:
			this->Harl::fnc = &Harl::error;
			(this->*fnc)();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
	}
}
