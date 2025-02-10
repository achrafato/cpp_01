/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:19:13 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 18:39:21 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *Zombie::zombieHorde(int N, std::string name)
{
	int i;

	(void) name;
	if (N < 0)
		return (NULL);
	i = 0;
	try
	{
		Zombie *zm = new Zombie[N];
		while (i < N)
		{
			zm[i] = Zombie(name);
			i++;
		}
		return (zm);
	}
    catch (const std::bad_alloc& e)
    {
        cerr << "Memory allocation failed " << e.what() << endl;
    }
	return (nullptr);
}
