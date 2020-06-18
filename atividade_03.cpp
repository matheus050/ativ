#include <iostream>
#include <string.h>
#include <fstream>


int main(int argc, char *argv[]){
    using namespace std;
    string mensagem;
    fstream arquivo_saida("saida.txt", ios::in | ios::out | ios::app);

	if (argc == 1){
		cout << "Uso:" << argv[0] << " add <mensagem>" << endl;
		cout << "Uso:" << argv[0] << " <list>" << endl;
	}
	if(argc == 2 && string(argv[1]) == "add"){
        cout << "Digite uma mensagem:" << endl;
        getline(cin, mensagem);
        arquivo_saida << mensagem << endl;
	}
	else if(argc == 2 && string(argv[1]) == "list"){
		int cont = 0;
		while(!arquivo_saida.eof()){
            cont++;
			getline(arquivo_saida, mensagem);

            if(mensagem.size() == 0){
                continue;
            }
			cout << cont << ". " << mensagem << endl;
        }
	}
	if(argc == 3 && string(argv[1]) == "add"){
        mensagem = argv[2];
		arquivo_saida << mensagem << endl;
	}

	return 0;
}