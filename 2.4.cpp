#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main (){
	int c;
	printf("tabla de ASCCI\n");
	for(c=1;c<=127;c++){
		printf("%c", c);
		if(c%16==0){
			printf("\n");
		}
	}
}
