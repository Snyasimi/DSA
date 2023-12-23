#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX_SIZE 20

int Array[MAX_SIZE];
int top = -1;

void push(int data){

	if(top <= MAX_SIZE)
	{
		top++;
		Array[top] = data;
		return;
	}
	
	printf("OVERFLOW ERROR !! ARRAY FULL\n");
	return;
}

int pop(){

	if(top <= MAX_SIZE && top >= 0)
	{
		int data = Array[top];
		top--;
		return data;
	}

	printf("UNDERFLOW ERROR!! STACK EMPTY\n");

}

void display(){

	for(int i = MAX_SIZE; i >= 0 ; i--){
	
		printf("%d->",Array[i]);
	}
	return;
}

int main(){

	push(77);
	printf("TOP IS: %d\t VALUE: %d\n",top,Array[top]);
	push(89);
	printf("TOP IS: %d\t VALUE: %d\n",top,Array[top]);
	display();
	pop();
	printf("\n AFTER POPPING LAST\n");
	display();
	push(44);
	push(42);
	push(43);
	push(45);
	push(46);
	push(47);
	push(48);
	push(49);
	push(40);
	printf("\nAFTER PUSHINGn\n");
	push(44);
	pop();
	display();

	printf("\nTOP IS NOW: %d, the value of top is :%d\n",top,Array[top]);
}
