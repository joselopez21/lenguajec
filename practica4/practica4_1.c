//PRACTICA 4 EJERCICIO 1
//LOPEZ TOVAR JOSE CARLOS

//Programa que imprime los numeros de 0 a el numero que ingrese el usuario.

#include<stdio.h> //header

int i= 0; //variables globales
int numero;
int main() //funcion main()
{
	printf("Cuantos numeros quieres que se impriman ");
	scanf("%d",&numero);
	for(i=0; i<=numero; i++)
	{
	printf("%d\n",i); 
	}
return 0;
}
