

#include "Harl.hpp"


static int	argError(void)
{
	std::cout << "Wrong number of arguments." << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	Harl harl;
	int  level;

	if (argc != 2)
		return (argError());
	level = getLevel(argv[1]);
	switch(level)
	{
		case 0 :
			harl.complain("DEBUG");
		case 1 :
			harl.complain("INFO");
		case 2 :
			harl.complain("WARNING");
		case 3 :
			harl.complain("ERROR");
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problem. ]" << std::endl;
	}
	return (0);
}