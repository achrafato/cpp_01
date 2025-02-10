/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:39:13 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/24 10:11:39 by aibn-che         ###   ########.fr       */
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
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie(void);

        void    announce(void);
        Zombie* newZombie(std::string name);
        void randomChump(std::string name);
        Zombie(void);
};

#endif