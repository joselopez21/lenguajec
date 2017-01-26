//PRACTICA 9 
//LOPEZ TOVAR JOSE CARLOS

/*Programa que imprime el ultimo elemento que se reciba de la linea de comandos, la condicion es que se debe tener al menos un elemento.Crea un programa que imprima el ultimo elemento que se reciba por línea de comandos.
*/

#include <stdio.h>//funcion main

void main(int argc,char *argv[])
{       
	int ultimo_elemento = 0;//variable a usar
	
	if (argc < 2)//Con esto se asegura que al menos haya un elemento
                    printf("Ponle argumentos separados por espacio\n");	
	else
	{
		ultimo_elemento = argc-1;
		printf("El ultimo elemento ingresado es: %s\n", argv[ultimo_elemento]);
	}
}
