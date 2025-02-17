/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:12:15 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/16 03:12:06 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//default constructor
Zombie::Zombie() : name("no name")
{
    std::cout << "Zombie " << name << " has been created" << std::endl;
}

//constructor with name
Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << name << " has been created" << std::endl;
}

//destructor
Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " has been destroyed" << std::endl;
}

//methods
void Zombie::announce(void) const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
