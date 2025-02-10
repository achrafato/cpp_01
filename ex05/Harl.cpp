/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:13:10 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 15:52:00 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	std::string d[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	this->Harl::fnc[0] = &Harl::debug;
	this->Harl::fnc[1] = &Harl::info;
	this->Harl::fnc[2] = &Harl::warning;
	this->Harl::fnc[3] = &Harl::error;
	while (i < 4)
	{
		if (!level.compare(d[i]))
		{
			(this->*fnc[i])();
			break;
		}
		i++;
	}
}
