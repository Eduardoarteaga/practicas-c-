#include <stdlib.h>
#include <stdio.h>
#include <conio.h> 

int main(){
	int p1=0, p2=0, p3=0, n1=0, n2=0, n3=0;
	printf("Ingresar su nota del primer parcial");
	scanf("%d", &p1);
	printf("Ingrese su nota del segundo parcial");
	scanf("%d", &p2);
	printf("Ingrese su nota de mejoramiento");
	scanf("%d", &p3);
	if(p1>p2||p1>p3){
		if(p2>p3||p2>p1){
			n1=(p1+p2)/2;
			printf("%d", n1);
		}else{
			n2=(p1+p3)/2;
			printf("%d", n2);
		}
	}else{
		n3=(p2+p3)/2;
		printf("%d", n3);
	}
}
