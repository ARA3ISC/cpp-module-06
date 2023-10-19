/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:42:33 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/19 16:33:18 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *d = new Data;
    uintptr_t result;

    // initializing data members
    d->count = 42;
    d->age = 22;
    d->c = 'a';
    d->b = true;

    std::cout << "address before serializing : ";
    std::cout << d << std::endl;
    
    result = Serializer::serialize(d);
    d = Serializer::deserialize(result); 
    
    std::cout << "address after serializing  : ";
    std::cout << d << std::endl; // must be equal to the original Data address

    // deleting Data object to avoid memory leak
    delete d;
}