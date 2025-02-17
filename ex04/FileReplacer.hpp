/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:10:18 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/17 19:42:13 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <fstream>

class FileReplacer
{
    public:
        FileReplacer(std::string filename, std::string s1, std::string s2);
        ~FileReplacer();
        int     checker();
        int     replace();
    private:
        std::string filename;
        std::string s1;
        std::string s2;
};

#endif