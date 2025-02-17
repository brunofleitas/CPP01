/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:18:36 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/16 03:11:24 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return 0;
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
    {
        horde[i].setName(name);
    }
    return horde;
}