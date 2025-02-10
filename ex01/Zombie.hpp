/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:39:13 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 10:57:48 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

class Zombie
{
    private:
        string name;

   public:
        Zombie  (string name);
        Zombie  *zombieHorde(int N, string name);
        void    announce(void);
        Zombie   (void);
};

#endif