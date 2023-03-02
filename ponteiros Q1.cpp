/*1. Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usuário e imprima esses valores utilizando o ponteiro. 
Ao final, mostre em tela cada valor armazenado e seu respectivo endereço de memória.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int array[5];
	int *p = array;
	int i;
	
	printf("Digite 5 valores inteiros\n");
	for(int i = 0; i < 5; i++){
		scanf("%d", &p[i]);
	}
	
	for(int i = 0; i < 5; i++){
		printf("Valor:%d\t Endereço: %p\n",*(p + i));
	}	
	
	for(int i = 0; i < 5; i++){
		printf("Valor armazenado:%d\n", *(p + i));
	}
	
	return 0;
}
