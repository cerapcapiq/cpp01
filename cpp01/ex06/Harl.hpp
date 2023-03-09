

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include <cstdlib>

// classes

class Harl
{
	private:
		void	debug(void) ;
		void	info(void) ;
		void	warning(void) ;
		void	error(void) ;

	public:

		Harl();
		~Harl();
		void complain(std::string level);

};

typedef void (Harl::*function_p)(void) ;
int		getLevel(std::string level);

//  aliasing Function_p to void(*)().