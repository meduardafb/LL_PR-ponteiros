/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. 
Em seguida, preencha as variáveis com valores informados pelo usuário. Utilizando ponteiros, 
troque os valores entre as duas variáveis sem usar uma variável temporária e sem utilizar operadores de 
atribuição direta. Em seguida, imprima os valores atualizados das duas variáveis.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int valor1, valor2, *p1 = &valor1, *p2 = &valor2;
	
	printf("Digite 2 Valores\n");
	
	printf("Digite o 1ª valor: \n");
	scanf("%d", &valor1);
	
	printf("Digite o 2ª valor: \n");
	scanf("%d", &valor2);
	
	*p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    
    printf("Valores atualizados.\n Valor 1: %d\t Valor2: %d\n", *p1, *p2);
	
	
	return 0;
}
