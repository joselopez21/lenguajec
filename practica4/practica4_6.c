//PRACTICA 4 EJERCICIO 6
//LOPEZ TOVAR JOSE CARLOS
//Programa que calcula area de figuras cuadrado, rectangulo y triangulo.

#include<stdio.h>//header

//funcion main
int main()
{
	int opcion;
	float a,b;
	do{
	printf("Programa que determina el area de la figura que elijas\n\n");
	printf("1. Triangulo\n");
	printf("2. Rectangulo\n");
	printf("3. Cuadrado\n\n");
	printf("Elige una opcion: ");
	scanf("%d",&opcion);

	switch(opcion)
	{
		case 1:
			printf("Introduce la altura: ");
			scanf("%f",&a);
			printf("Introduce la base: ");
                        scanf("%f",&b);
			printf("El area del triangulo es: %f[u²]\n", a*b/2);
		break;
		
		case 2:
                        printf("Introduce la altura: ");
                        scanf("%f",&a);
                        printf("Introduce la base: ");
                        scanf("%f",&b);
                        printf("El area del rectangulo es : %f[u²]\n", b*a); 
		break;
		
		case 3:
                        printf("Introduce el lado del cuadrado: ");
                        scanf("%f",&a);
                        printf("El area es: %f[u²]\n", a*a);			     
		break;
		default:
			printf("Opcion incorrecta\n");
			
		break;
	        }
	}
	while(opcion>3);
	return 0;
}



