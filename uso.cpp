#include "uso.h"
#include <iostream>

void como_usar(const std::string &prog){
	std::cout << "Uso:" << argv[0] << " add <mensagem>" << endl;
	std::cout << "Uso:" << argv[0] << " <list>" << endl;
}