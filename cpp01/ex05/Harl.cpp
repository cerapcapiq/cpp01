

#include "Harl.hpp"

Harl::Harl() {
	
}

Harl::~Harl() {
	
}

/* Debug messages function */
void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

/* Info messages function */
void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

/* Warning messages function */
void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

/* Error messages function */
void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/* Calles respective function using pointers */
void	Harl::complain(std::string levels) 
{
	void (Harl::*complaint[])() =
	{
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error,
	};
	std::string level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};


	for (int i = 0; i < 4; ++i) 
	{
		if (level[i] == levels) 
		{
			(this->*complaint[i])();
			break;
	}
  }
}

