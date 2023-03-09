/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:54:06 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/06 12:54:08 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private :
    std::string name;
    class Weapon &weapon;

    
    public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
   void  attack(); 
};

#endif
