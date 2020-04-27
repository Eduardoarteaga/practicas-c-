#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
int Array [9];
int i=0, random=0, x=0, z=0;
int main (){
	for(i=0, i<=8, i++){
		printf("Ingrese su #i numero de su cedula:");
		scanf("%d", Array[i]);
		if (i==8){
			Array[i]='NULL';
		}
	}
	for (x=0, x<=8, x++){
		if(Array[x]=='NULL'){
			random=aleatorio();
			Array[x]=random;	
		}
	}
	printf("Su numero de cedula es:");
	for(z=0, z<=8, z++){
		printf("%d", Array[z]);
	}
}
int aleatorio(){
    int numero;
    numero = 0 + rand() % ((9+1)-0);
    return numero;
}

