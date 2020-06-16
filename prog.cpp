#include <iostream>
#include <string>

int main(int argc, char *argv[]){
	if (argc == 1){
		std::cout << "Uso: ./prog add <mensagem>" << std::endl;
	}
	if(argc == 2 && std::string(argv[1]) == "add"){
		std::string mensagem;
		std::cout << "Coloque uma mensagem:" << std::endl;
		std::getline(std::cin, mensagem);
		std::cout << mensagem << std::endl;
	}
	if(argc == 3 && std::string(argv[1]) == "add"){
		std::cout << argv[2] << std::endl;
	}
	return 0;
}