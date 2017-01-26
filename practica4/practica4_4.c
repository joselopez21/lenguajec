//PRACTICA 4 EJERCICIO 4
//LOPEZ TOVAR JOSE CARLOS
//Programa que toma como parametro un caracter y lo regresa a su equivalente
//en hexadecimal

#include<stdio.h> //header

int main() //funcion main()
{
	char letra;
	printf("Introduce la letra o el caracter especial que quieras saber :  ");
	scanf("%c",&letra);
	printf("El caracter que elegiste es %c su correspondiente en hexadecimal es: %x y en decimal es: %d\n",letra,letra,letra);
		
	return 0;
}

