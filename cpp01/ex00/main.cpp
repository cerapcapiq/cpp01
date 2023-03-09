/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:52:28 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/08 12:23:37 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"


int main(void)
{
    Zombie zombie1("Megasubs");
    Zombie zombie2("MODS");

    Zombie *zombieChad;
    zombieChad = newZombie("GIGACHAD");
    randomChump("plebs");

    delete zombieChad;

    return 0;
}