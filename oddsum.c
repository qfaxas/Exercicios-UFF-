/*
	Comando: Sabe-se que um número da forma n³ é igual a soma 
	de n ímpares consecutivos. Por exemplo: 1³ = 1, 2³ = 3+5, 
	3³ = 7+9+11, 4³ = 13+15+17+19,...
	Escreva um programa que, dado um número m, sejam informados os 
	ímpares consecutivos cuja soma é igual a n³ para n assumindo 
	valores de 1 a m. No exemplo acima, m = 4.	
*/

/*
	Headline: It's known that a number written as n³ is equal to a
	sum of n consecutive numbers. I.e: 1³ = 1, 2³ = 3+5, 3³ = 7+9+11, 
	4³ = 13+15+17+19,...
	Write a program that, given a number m, informs the consecutive
	odd numbers that the sum is equal to n³, taking n as values from
	1 to m. On given example, m = 4
*/

#include <stdio.h>

int main(){
	unsigned int num, tri, i; //num = número de teste, tri = numero 
							  //triangular, i = passo do for
	printf("Digite o valor a ser mostrado: ");
	scanf("%d", &num);
	num--;
	tri = (num*(num+1)) + 1;
	printf("%d", tri);
	tri += 2;
	for (i = 0; i < num; i++){
		printf(" + %d", tri);
		tri += 2;
	}
	return 0;
}
