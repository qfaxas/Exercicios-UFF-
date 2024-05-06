/*
	Comando: Escreva um programa em C que recebe como entrada um número inteiro e
	devolve o fatorial deste número
*/

/*
	Task: Write a program that reads an integer write and writes the one number's factorial
*/ 

#include <stdio.h>

unsigned long long int fatorial(int num);

int main(){
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	while (num != 0){
		printf("A fatorial é %lli\n", fatorial(num));
		printf("Digite um número: ");
		scanf("%d", &num);
	}
	return 0;
	
}

unsigned long long int fatorial(int num){
	if (num == 0) return 1;
	else return num*fatorial(num - 1);
}

