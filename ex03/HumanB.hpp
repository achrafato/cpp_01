/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:21:37 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 11:26:36 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *we;
    public:
        HumanB  (std::string name);
        void    attack(void);
        void    setWeapon(Weapon &w);
};

#endif
