//PRACTICA 4 EJERCICIO 3
//LOPEZ TOVAR JOSE CARLOS
//Programa que imprime los n primeros numeros primos.

#include<stdio.h> //header

int main() { //funcion main
int numero, n, es_num_primo;
int i;

	printf("Cuantos numeros primos quieres imprimir\n");
	scanf ("%d", &numero);
        
	n=2;
	printf("Los numeros primos son:\n");
	while(numero > 0) {
		//Determinar si n es primo
		es_num_primo=1;
		for(i=2; i < n; i++) {
			if(n % 2 == 0){
				es_num_primo=0;
				break;
			}
		}
		//mostrar el numero y aumentar el contador
		if(es_num_primo){
			printf("%d \n", n);
			numero--;
		}
		n++;
	}
	return 0;
}
