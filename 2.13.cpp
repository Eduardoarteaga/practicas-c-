#include <stdio.h>
#include <stdlib.h>

//muestra 
void pintMatriz(int *a,const int size){
	for(int r=0;r<size;r++){
		for(int k=0;k<size;k++){
			printf("%3d", *(a+(r*size+k)));
		}
		printf("\n";)
	}
}
int main(){
	int a[3][3];
	printf("Ingrese matriz 3x3(use <espacio> o <enter> para ingresar numeros)\n");
	for(int i=0;i<3;i++){
		for (int k=0;k<3;k++){
			scanf("%d",&a[i][k]);
		}
	}
	printMatriz((int *)a,3);
	//boll esIdentidad-validaMatrizIdentidad((int *)a,3);
	//printf((esIdentidad)?"Es Matriz Identidad\n": "Lo siento no es!");	
}
