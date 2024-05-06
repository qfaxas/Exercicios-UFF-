/*
	Comando:Escreva um programa em C que caso um número informado seja primo,
	escreve os dois primos anteriores e os dois primos sucessores a ele
*/

/*
	Task: Write a program that reads a number and, and if it's prime, writes
	the two previous primes and the next two 
*/

#include <stdio.h>

int primo(int num);

int ant(int num);

int nex(int num);

int main(){
	int num;
	printf("Digite um número: ");
	scanf(" %d", &num);
	while (num != 0){
		if (num <=3) printf("Não tem 2 anteriores\n");
		else if (primo(num) == 1){
		printf("Os primos anteriores são %d e %d, e os próximos são %d e %d\n",
		ant(ant(num)), ant(num), nex(num), nex(nex(num)));
		}
		else printf("Não é primo\n");
		printf("Digite um número: ");
		scanf(" %d", &num);
	}
	return 0;
}

int primo(int num){
	unsigned int res = 2, i = 2, primo = 1, ado;
	if (num == 1) return 0;
	else if (num == 2) return 1;
	else{
		do {
			res = num%i;
			ado = num/i;
			i++;
			if (res == 0){
				primo--;
				break;
			}
		} while (ado < num && i != num);
		if (primo == 0) return 0;
		else return 1;
	}
}

int ant(int num){
	num--;
	if (primo(num) == 1) return num;
	else return ant(num);
}

int nex(int num){
	num++;
	if (primo(num) == 1) return num;
	else return nex(num);
}
