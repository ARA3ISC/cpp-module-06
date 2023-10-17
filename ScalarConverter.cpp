/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:57:58 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/17 18:04:06 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << "ScalarConverter constructor called" << std::endl;
}

void    displayChar(double r)
{
    if (r )
}

void ScalarConverter::convert(std::string &literal)
{
    char *end;
    double result;

    result = std::strtod(literal.c_str(), &end); 
    displayChar();
}


ScalarConverter::~ScalarConverter() {
    std::cout << "ScalarConverter destructor called" << std::endl;
}