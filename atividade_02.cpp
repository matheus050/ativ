#include <iostream>
#include <string.h>
#include <fstream>


int main(int argc, char *argv[]){
    using namespace std;
    string mensagem;
    ofstream arquivo_saida("saida.txt", ios::app);

	if (argc == 1){
        cout << "Uso:" << argv[0] << " add <mensagem>" << endl;
	}
	if(argc == 2 && string(argv[1]) == "add"){
        cout << "Digite uma mensagem:" << endl;
        getline(cin, mensagem);
        arquivo_saida << mensagem << endl;
	}
	if(argc == 3 && string(argv[1]) == "add"){
        mensagem = argv[2];
	arquivo_saida << mensagem << endl;
	}
	return 0;
}
