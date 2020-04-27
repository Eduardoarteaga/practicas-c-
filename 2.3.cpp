#include <stdio.h>
#include <iostream>

int main (){
	int num=0,tabla=0;
	printf("Ingrese que tabla desea: \n");
	scanf("%d", &num);
	for(int i=0;i<=12;i++){
		tabla=i*num;
		printf("%d x %d = %d\n",i,num,tabla);
	}
}
