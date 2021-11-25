/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:41:17 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 10:03:02 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

int     error(std::string error) {
	std::cout << error << std::endl;
	return 1;
}

void	printChar(float const & value, std::string const & arg) {
	if ((atoi(arg.c_str()) == 0 && arg.length() > 1 )|| value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "char: Impossible" << std::endl;
	else if (value < 32 || value > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	return;
}

void	printInt(float const & value, std::string const & arg) {
	if ((atoi(arg.c_str()) == 0 && arg.length() > 1) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	return;
}

void printFloat(float const & value) {
	if (fmod(value, 1) == 0)
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	return;
}

void printDouble(float const & value) {
	if (fmod(value, 1) == 0)
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(value) << std::endl;
	return;
}

int main(int ac, char **av) {
	if (ac != 2) return (error(WRONG_ARGUMENT));
	std::string arg = static_cast<std::string>(av[1]);

	float value;
	if (arg.size() == 1 && !isdigit(static_cast<int>(arg[0])))
		value = static_cast<float>(arg[0]);
	else
		value = atof(arg.c_str());

	printChar(value, arg);
	printInt(value, arg);
	printFloat(value);
	printDouble(value);
	return (0);
}
