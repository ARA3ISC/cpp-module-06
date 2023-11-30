/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:13:15 by maneddam          #+#    #+#             */
/*   Updated: 2023/11/30 12:15:45 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    try 
    {
        Base *base = generate();
        A a; 
        B b; 
        C c;

        identify(base);
        std::cout << std::endl;
        identify(a);
        identify(b);
        identify(c);
        delete base;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
