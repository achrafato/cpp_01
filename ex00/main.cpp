/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:39:23 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 10:42:35 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie z;
	Zombie e;
	Zombie *k = z.newZombie("Ashraf");

	if (!(k == nullptr))
	{
		k->announce();
		delete k;
	}
	e.randomChump("hello");
	return (0);
}