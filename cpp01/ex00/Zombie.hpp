/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:52:31 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/06 12:52:40 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
    private:

    std::string name;

    public:
    void announce();
    Zombie(std::string name);
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);