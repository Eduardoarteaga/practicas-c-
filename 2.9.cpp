#include <stdio.h>
#include <stdlib.h>
void intercambiar(int *v1, int *v2){
	int aux=*v1;
	*v1=*v2;
	*v2=aux;
}
int main (){
	int a=15,b=27;
	int=*aPtr;
	aPtr=&a;
	printf("La direccion de memoria de &a= %p, aPtr=%p\n", &a, aPtr);
	printf("El valor de a=%d, *aPtr=%d\n",a,*aPtr);
	//llamada a funcion usando punteros
	intercambiar(a&,&b);
	printf("Intercambio a con b....%d, %d \n", a,b);

}
