/*Escreva um programa que solicite ao usuário que digite uma string e, 
em seguida, crie uma nova string que seja a cópia da string original, 
mas com todas as vogais removidas. O programa deve usar ponteiros para manipular as strings.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char string[50];
	char *p = string;
	
	printf("Digite uma palavra: \n");
	
	gets(string);
	
	for(int i = 0; i < 50; i++){
		
		if(!(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' ||
			p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U')){
				printf("%c", *(p + i));
		}
		
		if(p[i] == '\0') break;
	}
		
	
	return 0;
}
