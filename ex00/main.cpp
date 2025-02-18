/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:12:22 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/18 15:22:23 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie = Zombie("Bruno");
    zombie.announce();

    Zombie *heapZombir = newZombie("Karl");
    heapZombir->announce();
    delete heapZombir;

    randomChump("Billie");
    return 0;
}