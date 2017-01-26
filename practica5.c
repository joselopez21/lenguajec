//PRACTICA 5
//LOPEZ TOVAR JOSE CARLOS
//Programa que hace el factorial de un numero recursivamente.

#include<stdio.h>
//funcion factorial
int factorial(int x)
{
  	if(x<2)
    		return 1;
  	else
    		return x * factorial(x-1);
}

//funcion main
int main()
{
  	int numero=0;
  	printf("Introduce el numero del cual quieres obtener su factorial: ");
 	scanf("%i",&numero); 
	//Imprime el resultado y manda llamar a la funcion factorial
  	printf("El resultado es: %i\n", factorial(numero));
  	return 0;
}
