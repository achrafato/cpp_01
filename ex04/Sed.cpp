/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:20:12 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/24 14:59:40 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::~Sed()
{
	inputFile.close();
}

Sed::Sed(std::string file_name):inputFile(file_name)
{
	if (!inputFile.is_open())
	{
		std::cerr << "Error opening file for reading" << std::endl;
		std::exit(1);
	}
}

void	Sed::save_file_to_str(std::string *lines)
{
	std::string line;
	std::getline(inputFile, *lines, '\0');
}

std::string	Sed::replace_str(std::string lines, std::string str1, std::string str2)
{
	int 	i;
	int 	k;
	int		len;
	int		end;

	i = 0;
	while (lines[i])
	{
		
		size_t found = lines.find(str1);
		k = 0;
		i = 0;

		if (!(str1.empty()) && found != std::string::npos)
		{
			end = (int)found + str1.length();
			while (i < (int)found)
				sss << lines[i++];
			while (str2[k])
				sss << str2[k++];
			len = lines.length();
			lines = lines.substr(end, len - end);
		}
		else
		{
			while (lines[i])
				sss << lines[i++];
		}
	}
	return (sss.str());
}
