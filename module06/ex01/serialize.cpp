/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:19:17 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 09:28:01 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t   dataSerialize;
    
    dataSerialize = reinterpret_cast<uintptr_t>(ptr);
    return (dataSerialize);
}

Data *deserialize(uintptr_t raw)
{
    Data    *rawDeserialize;

    rawDeserialize = reinterpret_cast<Data*>(raw);
    return (rawDeserialize);
}