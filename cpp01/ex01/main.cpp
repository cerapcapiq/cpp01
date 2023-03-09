/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:53:27 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/08 12:33:40 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(5, "GIGACHAD");

    zombies[2].announce();

    //Zombie newzombie("simp");
    //newzombie.announce();
    
    delete [] zombies;
    return 0;
}