/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:21:37 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/17 16:06:08 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
 
class HumanA
{
    private:
        std::string name;
        Weapon &we;
    public:
        HumanA(std::string name, Weapon &w);
        void    attack(void);
};

#endif
