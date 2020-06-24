#include <iostream>
#include <string>
#include "mensagem.h"

int main(int argc, char *argv[]){
	int i;
	Mensagem diario;
	diario.msg = new diario.msg[10];

	std::cout << "Digite 10 mensagens!" << std::endl; 

	for(i=0; i<10; i++){
		std::getline(std::cin, diario.msg[i]);
	}

	delete[] diario.msg;

	return 0;
}