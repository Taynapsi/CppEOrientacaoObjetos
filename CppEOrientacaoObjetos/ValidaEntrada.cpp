#include "ValidaEntrada.hpp"
#include <string>
#include <iostream>

int ValidaEntrada::validaEntrada(int numero)
{
	while (!(std::cin >> numero) || numero < 0)
	{

		std::cout << "Erro: Inserir um numero valido: ";
		std::cin.clear();
		std::cin.ignore(123, '\n');
	}
}
