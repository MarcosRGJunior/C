#ifndef PONTO_H // verifica se PONTO_H exite, como é a primeira vez, ele passa começa a fazer esses codigos... Significa If Not Define
#define PONTO_H // cria uma macro definida como PONTO_H

typedef struct sPonto // Typedef define toda a Struct Sponto com os floats, de apenas Ponto 
{
	float x;
	float y;
} Ponto;

void iniciarPonto (Ponto * ponto, float x, float y); // Faz o cabeçalho da função para ela ficar definida, tipo printf
float obterX (Ponto * ponto); // obter o nome da função para o Ponto e o parametro da "ESTRUTURA Ponteiro chamado ponto"
float obterY (Ponto * ponto);

#endif
