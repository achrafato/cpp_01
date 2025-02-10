/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:36:32 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/19 09:52:58 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->we = &w;
}

void    HumanB::attack()
{
    std::cout <<  this->name << " attacks with their "<< this->we->getType() << std::endl;
}
