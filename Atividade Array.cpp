#include <iostream>

using namespace std;

void questao1(){
	cout << "Faca um Programa que leia um vetor de 10 números inteiros e mostre eles na ordem inversa" << endl;
	int numeros1[10];

	for (int i = 0; i < 10; i++) {
		cout << "Digite um numero: ";
		cin >> numeros1[i];
    }
    cout << "Os numeros digitados na ordem inversa sao:";
	for (int i = 9; i>= 0; i--){
		cout << " -> " << numeros1[i];
	}
	cout << endl;
}

void questao2(){
	cout << "Faca um Programa que leia um vetor de 5 numeros inteiros e mostre a soma, a subtracao e a divisao." << endl;
	int numeros2[5];

	for (int i = 0; i < 5; i++) {
		cout << "Digite um numero: ";
		cin >> numeros2[i];
	}
	
	int soma = numeros2[0];
    int subtracao = numeros2[0];
    float divisao = (float)numeros2[0];

    for(int i = 1; i < 5; i++) {
        soma += numeros2[i];
        subtracao -= numeros2[i];
        divisao /= numeros2[i]; 
    }
	
	cout << "A soma eh: " << soma << endl;
	cout << "A subtracao eh: " << subtracao << endl;
	cout << "A divisao eh: " << divisao << endl;
}

void questao3(){
	cout << "Faca um Programa que leia um vetor de 10 caracteres e diga quantas consoantes foram lidas." << endl;
	char caracteres[10];
	int consoantes = 0;
	
	for (int i = 0; i < 10; i++){
		cout << "Digite um caractere: ";
		cin >> caracteres[i];
		caracteres[i] = toupper(caracteres[i]);
		
		if (caracteres[i] >= 'A' && caracteres[i] <= 'Z' && caracteres[i] != 'A' && caracteres[i] != 'E' && caracteres[i] != 'I' && caracteres[i] != 'O' && caracteres[i] != 'U'){
			consoantes += 1;
		}
	}
	cout << consoantes << " consoantes foram lidas." << endl;	
}

int main() {
	
	int questao = -1;
	
	while (questao != 0){
		cout << " -> Digite o numero da questao: (1 a 3 - 0 para sair) ";
		cin >> questao;
		
		switch (questao){
			case 1:
				questao1();
				break;
				
			case 2:
				questao2();
				break;
			
			case 3:
				questao3();
				break;
			case 0:
                cout << "TCHAU" << endl;
                break;
            default:
                cout << "Questao inexistente!" << endl;
                break;	
		}
	}
	return 0;
}
