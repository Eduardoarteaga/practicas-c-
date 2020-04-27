#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main (){
	int c,n;
	printf("10 numeros aleatorios");
	for(c=1; c<=10; c++){
		n=rand()%100+1;
		printf("%d\n",n);
		
		
	}
	
}
