/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:43:01 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 10:43:03 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// #include <new>

Zombie* Zombie::newZombie( std::string name)
{
    try
    {
        return (new Zombie(name));
    }
    catch (const std::bad_alloc& e)
    {
        cerr << "Memory allocation failed " << e.what() << endl;
    }
    return (nullptr);
}
