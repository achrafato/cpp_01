/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:39:09 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 10:52:46 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie(){}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    cout << "Destroctur " << this->name << endl;
}