#include <stdio.h>
int main(){
	int camisas=0,precio=0,total=0;
	printf("Ingrese su numero de camisas\n");
	scanf("%d", &camisas);
	printf("Ingrese precio\n");
	scanf("%d", &precio);
	total=camisas*precio;
	if(camisas>=3){
		total=total*0.80;
	}else{
		total=total*0.90;
	}
	printf("total a pagar %d", total);
}
