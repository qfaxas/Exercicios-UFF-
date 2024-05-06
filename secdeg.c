/* 
	Comando: Escreva um programa que lê números reais a, b e c, e calcula as raízes de
	uma equação do 2o grau da forma ax² + bx + c = 0. Caso a raiz seja complexa, informe 
	a parte real e a parte imaginária.
*/

/*
	Task: Write a program that reads 3 real numbers a, b, c and returns the results of a 
	quadratic equation as in ax² + bx + c = 0. If It happens to be a complex root, print
	both the real part and the imaginary one.
*/

#include <stdio.h>
#include <math.h>
	
int main(){
	double a, b, c, delta;
	printf("Digite as constantes: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	while (a != 0 || b != 0 || c != 0){
		delta = b*b - 4*a*c;
		if (delta >= 0) printf("As raízes são %lf e %lf\n", 
		((-b + sqrt(delta))/(2*a)), ((-b - sqrt(delta))/(2*a)));
		else{
			delta *= -1;
			printf("As raízes são %lf + %lf*i e %lf - %lf*i\n", 
			(-b/(2*a)), (sqrt(delta)/(2*a)), (-b/(2*a)), (sqrt(delta)/(2*a)));
		}
		printf("Digite as constantes: ");
		scanf("%lf %lf %lf", &a, &b, &c);
	}
	return 0;
}

