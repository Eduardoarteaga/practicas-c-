#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main (){
	int c, a[100];
	srand(200);
	//muestre un histograma(deber)
	//#personas *******
	//encuesta muestra=100, pregunta=califique de 1 al 10
	for(c=0; c<=99; c++){
		a[c]=rand()%10+1;
	}
	int frecuencia[10]={0,0,0,0,0,0,0,0,0,0};
	for(c=0; c<=99; c++){
		if(a[c]==1){
			frecuencia[0]++;
		}
		if(a[c]==2){
			frecuencia[1]++;
		}
		if(a[c]==3){
			frecuencia[2]++;
		}
		if(a[c]==3){
			frecuencia[3]++;
		}
		if(a[c]==4){
			frecuencia[4]++;
		}
		if(a[c]==5){
			frecuencia[5]++;
		}
	}
	for(c=0;c<=9;c++){
		printf("%d........%d\n",c+1,frecuencia[c]);
	}
}
