//---------------------------------------------------------------------------------------------------------
/*
* @4
* Desenvolva a função a qual recebe dois valores de inteiros e que faça a todas as operacoes de ‘Bitwise’ e devolva o maior resultado
* entre eles.
*/
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
** encavalamento de if's com bitwise.
*/
int calculate_the_maximum(int v1, int v2) //tive de mudar de calcular_maximum_bitwise para calculate_the_maximum
{
	int	ret;

	ret = v1 | v2;	//inicializamos com OR para termos uma chance maior de 1's ligados.
	if (ret < (v1 & v2))
		ret = v1 & v2;
	if (ret < (v1 ^ v2))
		ret = v1 ^ v2;
	if (ret < (v1 & v2))
		ret = v1 & v2;
	if (ret < (~v1))	//TODAS operações bitwise na minha interepretação incluem os complementos de v1 e v2 e todas variações de bitshift entre v1 e v2 também;
		ret = ~v1;
	if (ret < (~v2))
		ret = ~v2;
	if (ret < (v1 << v2)) //daqui pra frente, over/underflow a rodo.
		ret = v1 << v2;
	if (ret < (v1 >> v2))
		ret = v1 >> v2;
	if (ret < (v2 << v1))
		ret = v2 << v1;
	if (ret < (v2 >> v1))
		ret = v2 >> v1;
	return (ret);
}

int main(){
 int valor_1, valor_2, maior_valor;
 printf("Informe os valores.\n");
 scanf("%d %d", &valor_1, &valor_2);
 maior_valor = calculate_the_maximum(valor_1, valor_2);

 printf("O maior valor e: %d .\n", maior_valor);

 return 0;
}
