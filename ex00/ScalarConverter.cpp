/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:57:58 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/18 17:02:15 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

void    displayChar(double r)
{
    if (r < 33 || r > 126)
    {
        std::cout << "char: Non displayable" << std::endl;
        return;
    }
    else if (r >= 33 && r <= 126)
        std::cout << "char: '" << static_cast<char>(r) << "'" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    
}

void    displayInt(double r)
{
    if (std::isnan(r) || r > INT_MAX || r < INT_MIN)
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int : " << static_cast<int>(r) << std::endl;
}

void    displayFloat(double r)
{
    if (r - static_cast<int>(r) > 0 || r - static_cast<int>(r) < 0)
        std::cout << "float: "  << r << "f" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(r) << "f" << std::endl;
}

void    displayDouble(double r)
{
    std::cout << "double: "  << r << std::endl;
}

void    ScalarConverter::convert(std::string &literal)
{
    char *end;
    double result;

    result = std::strtod(literal.c_str(), &end); 
    
    displayChar(result);
    displayInt(result);
    displayFloat(result);
    displayDouble(result);
}


ScalarConverter::~ScalarConverter() {}