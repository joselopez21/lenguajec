//PRACTICA 2
//LOPEZ TOVAR JOSE CARLOS
//Imprime los valores de las variables maximo y minimo.

#include<stdio.h>
#include<limits.h>

int main() 
{
printf("Caracter el maximo es %u\n",CHAR_BIT);
printf("Caracter con signo el maximo es: %u y el minimo es: %u\n",SCHAR_MAX, SCHAR_MIN); 
printf("Entero corto con signo el maximo es: %u y el minimo es: %u\n",SHRT_MAX, SHRT_MIN);
printf("Entero corto sin signo el maximo es: %u\n",USHRT_MAX);
printf("Enteros con signo el maximo es: %u y el minimo es: %u \n",INT_MAX, INT_MIN);
printf("Entero sin signo el maximo es: %u \n",UINT_MAX);
printf("Entero largo con signo el maximo es: %lu y el minimo es: %lu\n",LONG_MAX, LONG_MIN);
printf("Entero largo sin signo el maximo es: %lu\n",ULONG_MAX); 
return 0;
}
