#include <iostream>

void MostrarAlfabeto(){
	char c='A';
	while(c<='Z'){
		printf("%c = %d\n", c, c);
		c+=1;
	}
}
int main(){
	MostrarAlfabeto();
}
