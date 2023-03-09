/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:53:21 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/08 12:31:12 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
    private:
 std::string name;


    public:
    void announce();
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
