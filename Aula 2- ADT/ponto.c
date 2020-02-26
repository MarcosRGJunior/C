#include <stdio.h> // o <> busca no diretorio de bibliotecas do DEV
#include "ponto.h" // pega o diretorio criado junto no projeto

void iniciarPonto(Ponto *ponto, float x, float y)
{
	ponto->x= x; // Estabelece o ponteiro para puxar partes da funcao... Significa (*p).x
	ponto->y= y;
}

float obterX(Ponto * ponto)
{
	return ponto->x;
}

float obterY(Ponto * ponto)
{
	return ponto->y;
}
