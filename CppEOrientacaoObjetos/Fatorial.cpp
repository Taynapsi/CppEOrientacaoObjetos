#include <iostream>
#include <string>
#include "Fatorial.hpp"

void Fatorial::calculaFatorial()
{
	std::cout << "Qual o numero voce deseja saber o fatorial? *Digite o numero abaixo: " << std::endl;
	std::cin >> entradaFatorial;
	
	

	
	int resultadoFatorial = 1;

	if (entradaFatorial == 0 || entradaFatorial == 1)
	{
		std::cout << "O numero fatorial de " << entradaFatorial << ", e: " << resultadoFatorial << std::endl;
		return;
	}
	else
	{
		for (int i = 1; i <= entradaFatorial; i++)
		{
			resultadoFatorial *= i;
		}
	}
	std::cout << "O numero fatorial de " << entradaFatorial << ", e: " << resultadoFatorial << std::endl;
}
