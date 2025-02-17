/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:18:13 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/16 03:03:35 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieHorde.hpp"

int main(void) 
{
    int N = 10;
    Zombie* horde = zombieHorde(N, "Bruno");
    for (int i = 0; i < N; ++i)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}