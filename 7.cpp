#include <stdio.h>
#include <conio.h>

int main (){
	int a=0,b=0,c=0;
	int n=0,m=0,p=0;
	
	printf("Ingrese Nota 1: \n");
	scanf("%d", &a);
	printf("Ingrese Nota 2: \n");
	scanf("%d", &b);
	printf("Ingrese Nota 3: \n");
	scanf("%d", &c);
	
	if(a>b){
		n=a;
		if(b>c){
			m=b;
		}else{
			m=c;
		}
	}else{
		n=b;
		if(a>c){
			m=a;
		}else{
			m=c;
		}
	}
	p=(n+m)/2;
	printf("Promedio es: %d", p);
}
