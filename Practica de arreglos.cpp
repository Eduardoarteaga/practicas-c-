#include <stdio.h>
#include <stdlib.h>
//Rellenar un arreglo hasta el 100 en orden ascendente
int main(void){
	int x, tabla[100];
	for(x=0;x<=100;x++){
		tabla[x]=x;
	}
	for(x=1;x<=100;x++){
		printf("%d\n", tabla[x]);
	}
}
//Rellenar un arreglo hasta el 100 en orden descendente
int main(void){
	int x, tabla[100];
	for(x=0;x<=100;x++){
		tabla[x]=x;
	}
	for(x=100;x>=1;x--){
		printf("%d\n", tabla[x]);
	}
}
//
