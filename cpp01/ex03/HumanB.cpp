/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:54:10 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/06 12:54:10 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :name(name)
{
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB()
{
	
}

void HumanB::attack(void)
{
	if (this->weapon)
	{
		std::cout << this->name << " attacks with his "
				<< (*(this->weapon)).getType() << std::endl;
	}
	else
	{
		std::cout << this->name << " tries to attack but has no weapon "
					<< std::endl;
	}
	
}