//-------------------------------------------------------------------------------------------------------
/*
* @2
* Desenvolva a função que retorna o valor fatorial no parâmetro 'valor_ft'
*
*/
//-------------------------------------------------------------------------------------------------------
#include <stdio.h>

/*
** como não existe fatorial de números negativos, lidamos com esse erro
** rapidinho e atualizamos valor_ft para -1;
** se for dar overflow valor_n > 31, já setamos para -1 também.
** se for 0, seta para 1;
** depois é só faze um loop decrementando valor_n que roda enquanto valor_n for
** maior que 0 (não queremos zoar nossas multiplicaçoes) e atualizndo n.
*/
void calc_fatorial(int *valor_ft, int valor_n)
{
	if (valor_n <= 0 || valor_n > 31) //aninhando if só para economizar linha
	{
		*valor_ft = -1;
		if (valor_n == 0)
			*valor_ft = 1;
		return ;
	}
	*valor_ft = valor_n;
	while (--valor_n)
		*valor_ft *= valor_n;
}
int main() {
 int v, vf = 0;
 int *pv = &v;
 scanf("%d", &v);
 calc_fatorial(&vf, *pv);	//tive de arrumar a tipagem do orinal: calc_fatorial(vf, pv) manda tomava cast implicito e nos levava para o 0x0, resultando em segfault.
 							//O contrário acontece com pv, que recebe um ponteiro como int. Resolvem-se também os warnings do compilador.
 printf("Valor fatorial de: [%d] é [%d]", v, vf);
 return 0;
}
