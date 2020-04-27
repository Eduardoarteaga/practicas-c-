#include <stdio.h>
#include <conio.h>

int main (){
	
	int a=0,b=0;
	
	printf("Ingrese a:\n");
	scanf("%d", &a);
	printf("Ingrese b:\n");
	scanf("%d", &b);
	
	if(a%b==0){
		printf("%d es dividido para %d", a,b);
	}else{
		printf("%d No es divisible para %d", a,b);	
	}
	
	getch();
}

