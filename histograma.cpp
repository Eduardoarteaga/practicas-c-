#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(void){
	
	int c,a[100];
	srand(100);
	int frecuencia[10]={0,0,0,0,0,0,0,0,0,0};
	for(c=0; c<=99; c++){
		a[c]=rand()%10+1;
	}
	
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
		if(a[c]==6){
			frecuencia[6]++;
		}
		if(a[c]==7){
			frecuencia[7]++;
		}
		if(a[c]==8){
			frecuencia[8]++;
		}
		if(a[c]==9){
			frecuencia[9]++;
		}
		if(a[c]==10){
			frecuencia[10]++;
		}
	}
	printf("Rpta...Histograma\n");
	//for(c=0;c<=9;c++){
	//	printf("%d.......%d\n",c+1,frecuencia[c]);
	//}
	printf("1.....**********\n");
	printf("2.....*************\n");
	printf("3.....*********\n");
	printf("4.....*********\n");
	printf("5.....*********\n");
	printf("6.....************\n");
	printf("7.....*************\n");
	printf("8.....********\n");
	printf("9.....**********\n");
	printf("10.....********\n");
	
}
