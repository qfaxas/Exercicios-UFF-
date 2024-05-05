/*
	Comando da questão: Escreva um programa que dados n números inteiros positivos, seja
    informada a soma dos números que são primos.
    
    Para esse exercício eu considerei a forma de Input da lista como "Tamanho da lista de 
	números, quebra de linha e uma sequencia de números separados por espaço" porque é o 
	mais comum em tarefas do beecrowd e meus professores normalmente exemplificam assim,
	então puxei esse maneirismo deles. Um exemplo de entrada nesse formato seria:
	5
	2 3 4 6 19
*/

/*
	Task's Headline: Write a program capable of reading n integers and writing the sum of
    all prime numbers. 
	
	This assignment I'll be using the format "List lenght, linebreak followed by a
	sequence of integers separated by a blank space, I.e.:
	5
	2 3 4 6 19
*/

#include <stdio.h>

int primo(unsigned int num);		//função para verificar se o número é primo

int sumlist(unsigned int quan);		// função para ler E somar os números primos de uma lista

int main(){
	unsigned int num, soma;		//num é o tamanho da lista, soma é o resultado final da questão
	printf("Digite o tamanho da lista: ");
	scanf("%d", &num);
	while (num != 0){		//loop simples para repetir o código até o tamanho da lista ser = 0 
		soma = sumlist(num);
		printf("A soma é %d\n", soma);
		printf("Digite o tamanho da lista: ");
		scanf("%d", &num);
	}
}

int primo(unsigned int ero){						//ero = numero a ser verificado
	unsigned int res = 2, i = 2, primo = 1, ado;	// res = resto de ero/i, i = divisor variando de 2 até
						     						// ero-1, primo = booleana, ado = resultado de ero/i
	if (ero == 1) return 0;
	else if (ero == 2) return 1;
	else{
		do {
			res = ero%i;
			ado = ero/i;
			i++;
			if (res == 0){
				primo--;
				break;
			}
		} while (ado < ero && i != ero);
		if (primo == 0) return 0;
		else return 1;
	}
}

int sumlist(unsigned int quan){		//quan = quantidade de elementos na lista
	int lista[quan], i, soma = 0;   //lista em si, i = tamanho da lista/passo do loop for,
				  				    //soma = resultado do comando da tarefa
	printf("Digite a lista separada por espaços:");
	for (i = 0; i < quan; i++){
		scanf(" %d", &lista[i]);
		if ((primo(lista[i])) == 1) soma += lista[i]; 
	} return soma;
}

