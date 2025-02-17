/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:12:18 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/16 03:09:44 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        //default constructor
        Zombie();
        //constructor with name
        Zombie(std::string name);
        ~Zombie();
        void announce(void) const;
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
        void setName(std::string name);
    private:
        std::string name;
};

#endif