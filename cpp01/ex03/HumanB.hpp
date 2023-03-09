/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:54:12 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/06 12:54:13 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private :
    class Weapon *weapon;
    std::string name;
    
    public:
     HumanB(std::string name);
    ~HumanB();
   void  attack(void); 
   void setWeapon(Weapon &weapon);
};

#endif