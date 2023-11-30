/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:41:27 by maneddam          #+#    #+#             */
/*   Updated: 2023/11/30 12:17:28 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::Serializer(const Serializer& obj) {(void)obj; }
Serializer& Serializer::operator=(const Serializer& obj){(void)obj;return *this;}
Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t converted;

    converted = reinterpret_cast<uintptr_t>(ptr);
    return converted;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* tmp;

    tmp = reinterpret_cast<Data*>(raw);
    return tmp;
}