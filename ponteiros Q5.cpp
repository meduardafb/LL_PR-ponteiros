/*Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel. 
Em seguida, preencha a vari�vel com um valor real informado pelo usu�rio e utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float Vr;
	float *p;
	
	printf("Digite um n�mero:\n");
	scanf("%f", &Vr);
	
	p = &Vr;
	*p = *p * 2;
	
	printf("Valor Original:%f\n", Vr/2);
	printf("Valor Dobrado:%f\n", *p);
	
	return 0;
}
