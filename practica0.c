//PRACTICA 0
//LOPEZ TOVAR JOSE CARLOS
//Programa que imprime n linea a linea, e intercambia los multiplos de 3 
//por la palabra Fizz y los de 5 por Buzz, cuando sea ambos imprime FizzBuzz.

#include<stdio.h> 

//funcion main
int main() {
int i;
	for(i=1;i<=30;i++){
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz\n");
		else if (i % 3  == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else 
			printf("%i\n", i);
		
	}
}
