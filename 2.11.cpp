#include <stdio.h>
#include <stdlib.h>

int main(){
	int b[3][3];
	printf("Ingrese una matriz de 3x3\n");
	for(int row=0;row<3;row++){
		for(int column=0;column<3;column++){
			scanf("%d",b[row][column]);
		}
	}
	for(int row=0;row<3;row++){
		printf("\n");
		for(int column=0;column<3;column++){
			printf("%d", b[row][column]);
		}
	}
	for(int row=0;row<3;row++){
		printf("\n");
		for(int column=0;column<3;column++){
			if(row==column&&b[row][column]==1){
				if(row!=column&&b[row][column]==0){
					printf("\n Es una matriz identidad");
				}
			}
		}
	}
}
	
