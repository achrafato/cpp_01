/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:39:23 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/22 18:38:18 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

void lk()
{
	system("leaks zombie_horde");
}
int main()
{
	Zombie  z;
	int     i;
	int		n;

	// atexit(lk);
	n = -555555555;
	Zombie *d = z.zombieHorde(n, "name_1");
	if (!d)
		return (1);
	i = 0;
	while (i < n)
	{
		d[i++].announce();
	}
	delete [] d;
	return (0);
}
