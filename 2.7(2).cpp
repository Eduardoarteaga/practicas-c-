#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main (){
	int a[10]={0},aux=0;
	for(int i=0;i<10;i++){
		printf("Ingrese su numero:\n");
		scanf("%d",&a[i]);
	}
	for(int x=0;x<5;x++){
		aux=a[x];
		a[x]=a[9-x];
		a[9-x]=aux;
	}
	for(int b=0;b<10;b++){
		printf("su arreglo al revez: %d\n", a[b]);
	}
}
