/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:13:26 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 11:16:03 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType(void) const
{
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
