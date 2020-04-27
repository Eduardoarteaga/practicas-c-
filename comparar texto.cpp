#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[100],b[100];
	int position;
	printf("Texto A:\n");
	scanf("%s",a,99);
	printf("Texto B:\n");
	scanf("%s",b,99);
	int rest=strcmpi(a,b);
	if(rest==0){
		printf("Son iguales\n");
	}else{
		printf("Diferentes");
	}
}
