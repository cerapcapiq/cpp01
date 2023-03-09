/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:52:26 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/06 12:52:38 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
      std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::Zombie(std::string name) : name(name)
{
   announce();  
}

Zombie::~Zombie()
{
    std::cout << "Bye!" << name << std::endl;
}