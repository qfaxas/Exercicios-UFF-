/*
	Escreva um programa em C que imprima os N primeiros termos da série de
	Fibonacci, lembrando que esta série é definida da seguinte forma:

	Termo 1 = 1
	Termo 2 = 1
	Termo (x +1) = termo (x) + termo (x − 1)
*/

/*
	Write a program that writes the n  initial numbers of the Fibonacci sequence,
	which is given as the formula:
	1st term = 1
	2nd term = 1
	term (x + 1) = term (x) + term (x - 1)
*/

#include <stdio.h>

long int fibo(int num);

int main(){
	int termo;
	printf("Digite o número do termo desejado: ");
	scanf("%d", &termo);
	printf("%ld\n", fibo(termo)); 
	return 0;
}

long int fibo(int num){
	if (num == 2 || num == 1) return 1;
	else return (fibo(num - 1) + fibo(num - 2));	
}
