#include <stdio.h>
#include <stdlib.h>

struct cuenta{
	int numero_cuenta;
	char tipo;
	char fecha_apertura[12];
	char nombre[30];
	double saldo;
};

void mostrarCuenta(struct cuenta *aPtr){
	printf("%08d %c %-20s %9.2f", aPtr->numero_cuenta,aPtr->tipo, aPtr->nombre, aPtr->saldo);
}

int main(){
	struct cuenta a;
	a,
	b={333,´A´, "23-12-2018", "POPEYE", -1921132.01},
	c={38783,´C´,"01-01-2010", "MAXIMILIANO RAINERO", 0};
	
	a.numero_cuenta=732100;
	a.tipo=´A´;
	a.saldo=4000.25;
	strcpy(a.nombre, "JIMMY NEUTRON");
	strcpy(a.fecha_apertura, "10-10-2018");
	
	mostrarCuenta(&a);
	mostrarCuenta(&b);
	mostrarCuenta(&c);
}
