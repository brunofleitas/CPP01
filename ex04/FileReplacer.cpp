/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:10:31 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/17 18:30:59 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

//Constructor
FileReplacer::FileReplacer(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2)
{
    std::cout << "FileReplacer created" << std::endl;
}

//Destructor
FileReplacer::~FileReplacer()
{
    std::cout << "FileReplacer destroyed" << std::endl;
}

//Method to check if the file exists
int     FileReplacer::checker()
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cout << "File does not exist" << std::endl;
        return (1);
    }
    file.close();
    return (0);
}

//Method to create a new file with the replaced content
int     FileReplacer::replace()
{
    std::ifstream file(filename);
    if (file.is_open())
    {
        std::ofstream newfile(filename + ".replace");
        std::string line;
        while (std::getline(file, line))
        {
            size_t start_pos = 0;
            size_t find_pos;
            std::string result;
            while ((find_pos = line.find(s1, start_pos)) != std::string::npos)
            {
                result += line.substr(start_pos, find_pos - start_pos);
                result += s2;
                start_pos = find_pos + s1.length();
            }
            result += line.substr(start_pos);
            newfile << result << std::endl;
        }
        file.close();
        newfile.close();
        return (0);
    }
    return (1);
}