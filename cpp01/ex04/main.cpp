/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:54:39 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/06 12:54:41 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <ostream>
#include <cstring>

void ftReplace(std::ofstream &out_file, std::string line, std::string dest, std::string cpy)
{
    //int pos = 0;
    size_t dest_len = dest.length();
    size_t cpy_len = cpy.length();    
 	size_t pos = 0;

	while (1)
    {
		pos = line.find(dest, pos);
		if (pos == std::string::npos) 
        {
			out_file << line << std::endl;
			break;
		}
		line.erase(line.begin() + pos, line.begin() + pos + dest_len);
		line.insert(pos, cpy);
		pos += cpy_len;
    /*
    for (int i = 0; i < (int)line.size(); i++)
	{
		pos = line.find(dest, i);
		if (pos != -1 && pos == i)
		{
			out_file << cpy;
			i += std::string(dest).size() - 1;
		}
		else
			out_file << line[i];*/
	}
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "error number of arg" << std::endl;
        return -1;
    }

    std::string line;
    std::ifstream in_file(av[1]);
    std::string dest(av[2]);
    std::string cpy(av[3]);
    std::string new_file;
    new_file = av[1];
    new_file.append(".replace");

    if (!in_file.is_open())
    {
        std::cout << "cant open file" << std::endl;
        return -1;   
    }
    std::ofstream out_file(new_file);
	if (!out_file.is_open())
	{
		std::cout << "Coulnd't open the output file" << std::endl;
		return (-1);
	}
    while (getline(in_file, line))
    {
        ftReplace(out_file, line, dest, cpy);
    }
    in_file.close();
    out_file.close();
    return 0;
}

