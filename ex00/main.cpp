/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:54:25 by maneddam          #+#    #+#             */
/*   Updated: 2023/11/30 15:48:55 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc == 2)
		{
			std::string str = argv[1];
			ScalarConverter::convert(str);
		}
		else
			throw std::runtime_error("Invalid args count!");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

