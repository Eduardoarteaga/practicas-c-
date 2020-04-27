#include <pch.h>
#include <iostream>

int main(){
	int secreto=9, num=0, intentos=0;
	do{
		printf("Ingrese un numero del 1 al 10: \n");
		scanf("%d", &num);
		if(intentos++>=3){
			break;
		}
	}while(num!=secreto);
	if(num=secreto){
		printf("Adivinaste!");
	}
}
