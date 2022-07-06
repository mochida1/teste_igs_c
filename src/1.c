//-------------------------------------------------------------------------------------------------------
/*
* @1
* Desenvolver a função: ‘maior_valor’; que recebe quatro valores do tipo inteiro e retorna o maior valor.
*
*/
//-------------------------------------------------------------------------------------------------------
#include <stdio.h>
int maior_valor(int v1, int v2, int v3, int v4) //pela quantidade e simplicidade de argumentos, só encavalar um monte de if's já resolve.
{
	int ret;

	ret = v1;
	if (ret < v2)
		ret = v2;
	if (ret < v3)
		ret = v3;
	if (ret < v4)
		ret = v4;
	return (ret);
}

int main() {
 int a, b, c, d;
 scanf("%d %d %d %d", &a, &b, &c, &d);
 int valor = maior_valor(a, b, c, d);
 printf("%d", valor);
 return 0;
}
