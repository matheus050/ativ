#include <iostream>
#include <string.h>
#include <fstream>

#include "uso.h"
#include "mensagem.h"
#include "data.h"


int main(int argc, char *argv[]){
    using namespace std;
    Mensagem m1; 
    fstream arquivo_saida("saida.txt", ios::in | ios::out | ios::app);

	if (argc == 1){
		como_usar(argv[0]);
	}
	if(argc == 2 && string(argv[1]) == "add"){
		m1.data = get_current_date();
		m1.hora = get_current_time();
        cout << "Digite uma mensagem:" << endl;
        getline(cin, m1.msg);
        arquivo_saida << "- " << m1.data << " " << m1.hora << " " << m1.msg << endl;
    }      
	else if(argc == 2 && string(argv[1]) == "list"){
		int cont = 0;
        string linha;
		while(!arquivo_saida.eof()){
            cont++;
			getline(arquivo_saida, linha);

            if(linha.size() == 0){
                continue;
            }
			cout << mensagem << endl;
        }
	}
	if(argc == 3 && string(argv[1]) == "add"){
		m1.data = get_current_date();
		m1.hora = get_current_time();
        m1.msg = argv[2];
		arquivo_saida << "- " << m1.data << " " << m1.hora << " " << m1.msg << endl;
	}

	return 0;
}