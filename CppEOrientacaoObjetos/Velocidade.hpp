#pragma once
class Velocidade
{
	//na UML desenhamos que seria tipo "double", porem para suportar os dados implementamos como tipo "float";
	int metrosPercorridos;
	int tempoMinutos;
	float tempoSegundos;
public:
	float resultado;

public:
	void converteSegundos(int minutos); //nao foi necessario receber o parametro "tempoSegundos" como desenhado no diagrama de classe;
	void calculaVelocidade(int metros);	
	
};

