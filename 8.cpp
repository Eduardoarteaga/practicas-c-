#include <iostream>
#include <stdio.h>
int main {
	char letra=' ';
	
	printf("Ingrese una letra: \n");
	scanf("%c", &letra);
	
	if(letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
		printf("%c es vocal", letra);
	}else{
		printf("%c no es vocal", letra);
	}
}
