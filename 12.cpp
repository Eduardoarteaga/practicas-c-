#include <iostream>

#define TRUE 1
#define FALSE 0

int esPrimo(int n){
	int i=2;
	while(i<=n){
		if(n%i==0){
			return TRUE;
		}
		i+=1;
	}
	return FALSE;
}

int main (){
int numero=0;
printf("Ingrese un numero: \n");
scanf("%d", &numero);
if(esPrimo(numero)==TRUE){
	printf("%d es primo", numero);
	}else{
	printf("%d no es primo", numero);
	}		
}
