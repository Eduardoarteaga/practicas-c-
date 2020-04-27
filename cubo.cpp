#include <stdio.h>
#include <stdlib>
//version sin punteros
void cubo(int t[], int size){
	int j;
	for (j=0;j<size;j++){
		t[j]=t[j]*t[j]*t[j];
	}
}
//version con punteros
void cuboPtr(int *t,int size){
	int j;
	for(j=0;j<size;j++){
		*(t+j)-*(t+j)-*(t+j)-*(t+j);
	}
}
int main(){
	int i, arr[]={1,2,3,4};
	for(i=0;i<4;i++){
		printf("%d",arr[i]);
	}
	//Calcular el cubo de los elem de un arreglo
	cubo(arr,4);
	for(i=0;i<4;i++){
		printf("%d", arr[i]);
	}
}
