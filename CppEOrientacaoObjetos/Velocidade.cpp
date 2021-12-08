#include <string>
#include <iostream>
#include "Velocidade.hpp"

void Velocidade::converteSegundos(int minutos)
{
	tempoMinutos = minutos;
	tempoSegundos = tempoMinutos * 60;
}
void Velocidade::calculaVelocidade(int metros)
{
	metrosPercorridos = metros;
	resultado = metrosPercorridos/tempoSegundos;

	std::cout << "Um carro que percorre " << metrosPercorridos << " metros a cada " << tempoMinutos << " minutos, tera a velocidade de " << resultado << " metros / segundo, considerando o padrao S.I(Sistema Internacional)" << std::endl;
}
