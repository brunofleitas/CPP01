/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:31:02 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/17 17:43:39 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int     main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./replace filename s1(word to find) s2(word to replace)" << std::endl;
        return (1);
    }
    FileReplacer file(argv[1], argv[2], argv[3]);
    if (file.checker())
        return (1);
    if (file.replace())
        return (1);
    return (0);
}