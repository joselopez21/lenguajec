//PRACTICA 13
//Ofuscando el codigo
//López Tovar José Carlos

#include<stdio.h>
#define BEGIN int main(){
#define INTEGER int
#define IF if
#define THEN {
#define ELSE }else {
#define PRINT printf
#define ENDIF }
#define END  return 0; }

BEGIN
INTEGER x=10;
IF(x>=10)
THEN
	PRINT("TENGO DIEZ\n");
ELSE
	PRINT("REPROBARE\n");
ENDIF
END

