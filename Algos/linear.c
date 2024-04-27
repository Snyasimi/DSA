#include<stdio.h>


int main(){

	int key;
	int numbers[10] ={3,8,6,76,3,21,1,4,5,2};

	key = 21;
	//Perform a linear serch to look for the value in key	

	for(int i = 0; i < 9; i++){
	
		if(numbers[i] == key){
		
			printf("Element found in index [%d]\n",i);
			break;
		}

	}  

	return 0;
}
