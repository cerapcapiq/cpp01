

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;
	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cerr << "\033[1;31mUsage: " << argv[0] << " <level> (DEBUG, INFO, WARNING, ERROR)\033[0m" << std::endl;

	/*
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING")*/
	return (0);
}
