/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:01:21 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/17 14:45:35 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor
Weapon::Weapon(std::string type) : type(type)
{
    return;
}

// Destructor
Weapon::~Weapon()
{
    return;
}

//Getter
const std::string &Weapon::getType()
{
    return this->type;
}

//Setter
void Weapon::setType(std::string type)
{
    this->type = type;
}