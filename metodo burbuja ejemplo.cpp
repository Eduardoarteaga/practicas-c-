#include <stdio.h>
#include <stdlib.h>

int hold=*element1Ptr;
*element1Ptr=*element2Ptr;
*element2Ptr=hold;
}//end function swap
void bubbleSort(int *const array, size_t size){
	unsigned int pass; //pass counter
	size_t j;//comparison counter
	//loop to control comparisons during each pass
	for(j=0;j<size-1;++pass){
		//swap andjacent elements if they´re out of order
		if(array[j]>array[j+1]){
			swap(&array[j], &array[j+1]);
		}//end if
	}//end inner for 
}//end function bubblesort
int main(){
	srand(timer(NULL));
	int num[100]-(0);
	for(int t=0;t<100;t++){
		num[t]-rand()%900+100;
	}
}
