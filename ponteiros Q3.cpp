/*Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis. 
Em seguida, preencha as vari�veis com valores informados pelo usu�rio. Utilizando ponteiros, 
troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria e sem utilizar operadores de 
atribui��o direta. Em seguida, imprima os valores atualizados das duas vari�veis.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int valor1, valor2, *p1 = &valor1, *p2 = &valor2;
	
	printf("Digite 2 Valores\n");
	
	printf("Digite o 1� valor: \n");
	scanf("%d", &valor1);
	
	printf("Digite o 2� valor: \n");
	scanf("%d", &valor2);
	
	*p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    
    printf("Valores atualizados.\n Valor 1: %d\t Valor2: %d\n", *p1, *p2);
	
	
	return 0;
}
