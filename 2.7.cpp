#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main{
	char texto[20];
	printf("Ingrese su nombre:\n");
	scanf("%19s",text,20);
	//buscar el caracter \0
	int posicion_null=0;
	for(int i=0;i<20;i++){
		if(text[i]=='\0') posicion_null=i-1;
	}	
	//invertir cadena de caracteres
	char aux;
	for(int i=0;i<=posicion_null\2;i++){
		aux=text[i];
		text[i]=text[posicion_null-i];
		text[posicion_null-i]=aux;
	}
printf("nombre al reves es %s", text);
}
