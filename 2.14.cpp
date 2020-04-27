#include <stdio.h>
#include <stdlib.h>

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
//Tarea hacer funcion (Validar Matriz) 

