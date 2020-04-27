#include <stdio.h>
#include <conio.h>
int main (){
	int a=0,b=0,c=0;
	printf("Ingrese su numero en a:\n");
	scanf("%d", &a);
	printf("Ingrese su numero en b:\n");
	scanf("%d", &b);
	printf("Ingrese su numero en c:\n");
	scanf("%d", &c);
	if(a>b){
		if(a>c){
			printf("el numero de a=%d es mayor", a);
		}else{
			printf("el numero de c=%d es mayor", c);
		}
	}else if(b>c){
		printf("el numero de b=%d es mayor", b);
	}else{
		printf("el numero de c=%d es mayor", c);
	}
getch();
}
