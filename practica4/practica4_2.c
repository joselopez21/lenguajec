//PRACTICA 4 EJERCICIO 2
//LOPEZ TOVAR JOSE CARLOS
//Programa que imprime los numeros nones de 1 a el numero ingresado por el usuario.

#include<stdio.h> //header

int i= 0; //variables globales
int numero;

//funcion main
int main() 
{
	printf("Este programa imprime los numeros nones :)\n");
	printf("Introduce el numero hasta cual quieres que llegue:  ");
	scanf("%d",&numero);
		for(i=0; i<=numero; i++)
		{
			if(i%2 != 0)
			printf("%d\n",i); 
		}
return 0;
}
