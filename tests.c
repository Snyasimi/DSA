#include<stdio.h>
#include<stdlib.h>

void shift_right(int arr[],int size,int del_index){

	int num_of_elem = size;//sizeof(arr) / sizeof(arr[0]);

	if(del_index > size || del_index < 0 ){
		printf("Position out of bound\n");
		return;
	}
	for(int i = del_index - 1 ; i < num_of_elem ; i++){
		
		arr[i] = arr[i+ 1];

	}

	return;

 }

void print_arr(int arr[],int size){

	for(int i = 0 ; i < size ; i++){

		printf("ELEMNT AT INDX: %d POS:%d = [%d]\n",i,i+1,arr[i]);
	}
return ;


}

int main(){

	int array[5] = {1,2,3,4,5};
	

	print_arr(array,5);

	shift_right(array,5,6);
	print_arr(array,5);


return 0;
}
