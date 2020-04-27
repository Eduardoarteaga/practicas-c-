#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int baraja( int mazo[]);
 
int main(){
	int mazo[52],count=0;
	for(int i=0;i<52;i++){
		mazo[i]=count;
		count++;
	}
	baraja( mazo );
}
int baraja( int mazo[]){
	int num=0;
	srand( time( 0 ) );
	for(int i=0; i<52;i++){
		num=1+rand()%(101-1);
		mazo[i]=num;
		if(mazo[i]==mazo[i+1]){
			mazo[i]=num;
		}
	}
	for(int i=0;i<52;i++){
	printf("%d %d\n",i,mazo[i]);
	}
}
   


