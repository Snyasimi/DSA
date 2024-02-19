#include<stdio.h>
#include<stdlib.h>

int main(){

	int num = 123;

	int *num_ptr = &num;

	//num_ptr += sizeof(int);
	printf("address of num = %p\n",num_ptr);
	printf("the next value is = %d\n",*(num_ptr)/10);

	return 0;



}
