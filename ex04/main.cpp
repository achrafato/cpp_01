/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:26:54 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/24 14:59:59 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char *argv[])
{
	std::string	lines;
	std::string ext;
	std::string s;

	if (argc == 4)
	{
		Sed	sed = Sed(argv[1]);

		sed.save_file_to_str(&lines);
		lines = sed.replace_str(lines, argv[2], argv[3]);
		ext = ".replace";
		s = argv[1] + ext;
		std::ofstream outputfile(s);
		if (outputfile.is_open())
		{
			outputfile << lines;
			outputfile.close();
		}
	}
	return (0);
}
