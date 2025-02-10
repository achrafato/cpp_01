/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 09:32:53 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/17 16:04:48 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w): name(name), we(w){};

void    HumanA::attack(void)
{
    std::cout <<  this->name << " attacks with their "<< (this->we).getType() << std::endl;
}
