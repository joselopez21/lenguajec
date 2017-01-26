//PRACTICA 4 EJERCICIO 5
//LOPEZ TOVAR JOSE CARLOS
//Programa de autenticacion si es correcto imprime OK y si no imprime GTFOH!

#include<stdio.h> //header
#include<string.h>

int main() //funcion main
{
	char password[100];
	printf("Introduce la que creas que es el password:  ");
	scanf("%s",&password);

        if(strcmp(password,"password") == 0)
		printf("OK!\n");
	else
		printf("GTFOH!\n");

	return 0;
}
