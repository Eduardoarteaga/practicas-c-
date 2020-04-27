
#include <iostream>
#include <stdio.h>

int main (){
	int a[5]={0};
	for(int c=0; c<5;c++){
		printf("Ingrese su numero: \n");
		scanf("%d", &a[c]);
	}
	//mostrar suma y promedio
	int suma =0;
	for(int i=0; i<5;i++){
		suma +=a[i];
	}
	printf("Resultado %d\n",suma );
	printf("Promedio %d\n", suma/5);
	int moda[5]={0};
	for(int m=0; m<5;m++){
		if(a[m]==a[0]){
			moda[0]++;
		}
		if(a[m]==a[1]){
			moda[1]++;
		}
		if(a[m]==a[2]){
			moda[2]++;
		}
		if(a[m]==a[3]){
			moda[3]++;
		}
		if(a[m]==a[4]){
			moda[4]++;
		}
	}
	//mostrar frecuencia 
	for(int n=0;n<5;n++){
		printf("frecuencia de %d es %d \n", a[n], moda[n]);
	}
	
}
	
