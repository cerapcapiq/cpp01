/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:53:24 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/08 12:31:26 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0)
        return NULL;
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].set_name(name + std::to_string(i+1));
        zombies[i].announce();       
    }
    return (&zombies[0]);
}