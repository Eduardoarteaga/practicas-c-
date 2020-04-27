#include <stdio.h>
#include <stdlib.h>
int promedio(int p1,int p2){
	int resultado=(p1+p2)/2;
	return resultado;
}
int main (){
	int a=0,b=0;
	printf("Ingrese el primer numero:\n");
	scanf("%d", &a);
	printf("Ingrese su segundo nunmero:\n");
	scanf("%d", &b);
	printf("El promedio es %d", promedio(a,b));
}

