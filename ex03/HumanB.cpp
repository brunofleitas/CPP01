/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:03:15 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/17 15:29:46 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//Constructor
HumanB::HumanB(std::string name) : name(name)
{
    std::cout << "HumanB " << name << " has been created" << std::endl;
}

//Destructor
HumanB::~HumanB()
{
    std::cout << "HumanB " << name << " has been destroyed" << std::endl;
}

//methods
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
