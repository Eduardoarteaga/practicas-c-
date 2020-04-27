#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Menu();
void Adicionar(char *agenda, char* telefono);
void Listar();
void Modificar();
void Eliminar();

int main(){

char agenda[8][10];	
char telefonos[8][10];
int opc=0;

printf("Agenda telefonica\n");
Menu();
printf("Ingrese su opcion:\n");
scanf("%d", opc);

	switch(opc){
		case 1: 
			printf("1. Opcion: Adicionar\n");
			Adicionar(char *agenda, char* telefono);
			Menu();
		case 2:
			int j=1,count=0, memoria=0;
			printf("2. Opcion: Listado\n");
			Listar();
			for(j=1;j<=8;j++){
				if(agenda[j][10]!= NULL){
					count++;
				}else{
					break;
				}
			}
			memoria=8-count;
			printf("Disponible %d memorias\n", memoria);
			Menu();
		case 3:
			printf("3. Opcion: Modificar\n");
			Listar();
			Modificar();
			Menu();	
		case 4:
			printf("4. Opcion: Eliminar");
			Listar();
			Eliminar();
			Menu();
		case 5:
			//break;
			system("PAUSE");
	}
	return 0;
}
void Menu(){
	printf("Que desea hacer?\n");
	printf("1. Adicionar\n");
	printf("2. Listar\n");
	printf("3. Modificar\n");
	printf("4. Eliminar\n");
	printf("5. Salir\n");
}
void Adicionar(char *agenda, char* telefono){
	int i=0;
	for(int i;i<=8;i++){
		printf("Ingrese nombre\n");
		scanf_s("%s", agenda[i], 10);
		printf("Ingrese telefono\n");
		scanf_s("%d", telefono[i]), 10);
	}
		printf("Telefono ha sido guardado en la memoria agenda[%d][%d]\n",agenda[i][i]);
}
void Listar(){
	int i=1;
	for(i=1; i<=8;i++){
		printf("%d. %s\t %d\n",i,agenda[i][10],telefono[i][10]);	
	}
}
void Modificar(){	
	int mod=0;
	printf("Cual memoria desea modificar: %d\n");
	scanf("%d\n", &mod);
	printf("Ingese nombre (%s):\n", agenda[mod][10]);
	scanf("%s\n", &agenda[mod][10]);
	printf("Ingrese telefono (%d):\n", telefonos[mod][10]);
	scanf("%d\n", &telefono[mod][10]);
	printf("Telefono ha sido modicado en la memoria %d\n", mod);
}
void Eliminar(){
	int dele=0;
	printf("Cual memoria desea eliminar:\n");
	scanf("%d", &del);
	agenda[del][10]=0;
	telefonos[del][10]=0;
	printf("Telefono ha sido eliminado en la memoria %d", del);
}

