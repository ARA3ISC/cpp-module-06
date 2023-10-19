/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:54:25 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/18 17:32:26 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    ScalarConverter sc;
    if (argc == 2)
    {
        std::string str = argv[1];
        ScalarConverter::convert(str);
    }
    else
        std::cerr << "Invalid args count!" << std::endl;
}

