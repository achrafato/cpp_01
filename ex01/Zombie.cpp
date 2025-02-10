/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:39:09 by aibn-che          #+#    #+#             */
/*   Updated: 2024/07/31 09:43:24 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name)
{
    this->name = name;
}

Zombie::Zombie(){}

void    Zombie::announce(void)
{
    cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
