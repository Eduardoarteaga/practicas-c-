#include <stdio.h>
#include <stdlib.h>

int main (){
	int a=345;
	int=*aPtr;
	aPtr=&a;
	printf("La direccion de memoria de &a= %p, aPtr=%p\n", &a, aPtr);
	printf("El valor de a=%d, *aPtr=%d\n",a,*aPtr);
	if(a==*aPtr){
		printf("son iguales";)
	}else{
		printf("son diferentes");
	}
	
}
