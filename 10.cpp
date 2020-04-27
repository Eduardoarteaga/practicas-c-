#include <stdio.h>

int calcularPromedio(int p1, int p2){
	return(p1+p2)/2;
}

int mayor(int p1, int p2){
	if(p1>p2){
	}else{
		return p2;
	}
}

int main(){
	int a=0,b=0,c=0,n=0,m=0,promedio=0;
	printf("Ingrese Nota A:\n");
	scanf("%d", &a);
	printf("Ingrese Nota B:\n");
	scanf("%d", &b);
	printf("Ingrese Nota C:\n");
	scanf("%d", &c);
	if(a>b){
		n=a;
		m=mayor(b,c);
		/*if(b>c){
			m=b;
		}else{
			m=c
		}*/
	}else{
		n=b;
		m=mayor(a,c);
		/*if(a>c){
			m=a;
		}else{
			m=c;
		}*/
	}
	promedio=calcularPromedio(n,m);
	printf("El promedio es %d", promedio);
}
