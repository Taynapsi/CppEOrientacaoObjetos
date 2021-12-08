#include <iostream>
#include <string>
#include "Dados.hpp"
#include "Velocidade.hpp"
#include "Fatorial.hpp"

using namespace std;

//Tayna Souza Malaquias | Data: 08/12/2021
//Resumo: Atividade para avaliacao de fixacao de conteudos relativos a C++ e orientacao a objetos;



int main()
{
	int menu; //variavel para escolha do menu;
	int executar = 1;

	cout << "|Aluna: Tayna Souza Malaquias|" << endl;
	cout << "|***************************|" << endl;
	cout << "|*Bem vindo a Tay Sistemas!*|" << endl;
	cout << "|***************************|" << endl << endl;
	
	

	while ((executar != 0))
	{
		cout << endl << "Qual operacao deseja realizar? Digite o numero de sua escolha: " << endl;
		cout << "[1] - Encontre o numero maior entre 3 opcoes! " << endl;
		cout << "[2] - Descubra a velocidade de um carro que percorre 10 metros em 30 minutos, no padrao S.I.! " << endl;
		cout << "[3] - Escolha um numero para saber qual e o seu fatorial! " << endl;
		cout << "[4] - Para sair do programa! " << endl << endl;
		
		cin >> menu; // grava escolha do menu;
		switch (menu)
		{
		case 1:

			Dados calculo; //instancia um objeto "calculo" da classe "Dados";
			cout << "Digite 3 numeros: " << endl;
			//coleta dados do usuario;
			cin >> calculo.numeros[0];
			cin >> calculo.numeros[1];
			cin >> calculo.numeros[2];

			calculo.encontraMaior(calculo.numeros); //chama um metodo da classe;
			break;

		case 2:
			Velocidade carro; //instancia um objeto "carro" da classe "Velocidade";
			
			carro.converteSegundos(30); //passa valor de minutos para que seja convertido em segundos;
			carro.calculaVelocidade(10); //passa os metros perrcorridos para que seja feito o calculo no padrao SI;
			break;

		case 3:
			Fatorial fatorial; //instancia um objeto "fatorial" da classe "Fatorial";
			fatorial.calculaFatorial(); //chama o metodo para realizar o calculo;
			break;

		case 4:
			cout << "Obrigada por utilizar Tay Sistemas!";
			executar = 0;
			break;

		default:
			cout << "Digite um valor válido!";
			break;
		}
	}
	
}

