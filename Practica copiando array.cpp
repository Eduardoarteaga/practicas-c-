#include <stdio.h>
#include <conio.h>

void copiandoArrays(int a[], int b[], int tamanio);

int main (){
	int array1[5]={2,5,4,3,7};
	int array2[5];
	
	printf("Copiando Array\n\n");
	copiandoArrays(array1,array2,5);
	getch();
	return 0;
}

void copiandoArrays(int a[], int b[], int tamanio){
	int i;
	for(i=0;i<tamanio;i++){
		b[i]=a[i];
	}
	for(i=0;i<tamanio;i++){
		printf("%i", b[i]);
	}
}
