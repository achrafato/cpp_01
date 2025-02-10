/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:20:23 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/24 14:59:53 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

using std::cout;
using std::endl;

class Sed
{
	private:
		std::stringstream sss;
	public:
		Sed(std::string file_name);
		Sed(const Sed& other);
		~Sed(void);
		std::ifstream inputFile;
		Sed(void);
		void		save_file_to_str(std::string *lines);
		std::string	replace_str(std::string lines, std::string str1, std::string str2);
};