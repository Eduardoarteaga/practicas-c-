#include<iostream>
//Validar si un numero es primo 
//Mostrar los numeros primos de 1 al 100
#define TRUE 1
#define FALSE 0

int esPrimo(int n){
	int i=2;
	while(i<n){
		if(n%i==0){
			return FALSE;
		}
		i+=1;
	}
	return TRUE;
}

void Mostrarprimos(){
	int i=1;
	while(i<=100){
		if(!esPrimo(i)){
			printf("%d\n", i);
		}
		i+=1;	
	}
}

int main (){
	Mostrarprimos();
}
