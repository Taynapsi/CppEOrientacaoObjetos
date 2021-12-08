#include "Dados.hpp"
#include <string>
#include <iostream>

void Dados::encontraMaior(int numeros[3])
{
	for (int i = 0; i < 3; i++)
	{
		if(numeros[i] > numeros[i + 1])
		{
			numeroMaior = numeros[i];
		}
	}
	
	std::cout << "O Numero Maior e: " << numeroMaior << std::endl;

}
