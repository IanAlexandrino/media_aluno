#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

double nota_1, nota_2;

int main (){
    int op;
    string nome_aluno;
    double nota_3, nota_4;
    double calcula_nota;

    do{
        cout << "==================================" << endl;
        cout << "|==============MENU==============|" << endl;
        cout << "==================================" << endl;
        cout << "\n1. Calcular média de um aluno" << endl;
        cout << "2. Sair do programa\n" << endl;
        cin >> op;
        
        if(op == 2){
                cout << "Até a próxima!!!" << endl;
                return 0;
            }

        while(op != 1 && op != 2){
            cout << "Opção não existe, por favor escolha outra!!!" << endl;
            cin >> op;
            if(op == 2){
                cout << "Até a próxima!!!" << endl;
                return 0;
            }
        }
        cout << "\nDigite o nome do aluno: " << endl;
        getline(cin >> ws, nome_aluno);
        cout << "\nAgora digite as notas de " << nome_aluno << endl;
        cout << "Primeira nota: ";
        cin >> nota_1;
        cout << "Segunda nota: ";
        cin >> nota_2;
        cout << "Terceira nota: ";
        cin >> nota_3;
        cout << "Quarta nota: ";
        cin >> nota_4;

        calcula_nota = (nota_1 + nota_2 + nota_3 + nota_4) /4;

        cout << "\nA média das notas de " << nome_aluno << " é " << calcula_nota << "\n" << endl;

    } while (op == 1);
    
    return 0;
}