#include <fstream>
#include <iostream>

int	main(void)
{
	// In File Stream
	std::ifstream ifs("srcs.txt"); // source file
	unsigned int dest1;
	unsigned int dest2;

	ifs >> dest1 >> dest2; // donne le contenu
	std::cout << dest1 << std::endl;
	std::cout << dest2 << std::endl;
	ifs.close(); // fermer le file

	// Out File Stream
	std::ofstream ofs("srcs.txt"); // crée/remplace un file
	ofs << "9 33" << std::endl;    // contenu du file
	ofs.close();                   // fermer le file

	return (0);
}