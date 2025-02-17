/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:12:18 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/16 02:52:54 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void) const;
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
    private:
        std::string name;
};