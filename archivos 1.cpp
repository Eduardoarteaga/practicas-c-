#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	int c;
	
	fopen_s(&fp,"c:\\temp\\texto.txt","r");
	
	while(1){
		c=fgetc(fp);
		if(feof(fp)){
			break;
		}
		printf("%c", c);
	}
	fclose(fp);
	return (0);
}
