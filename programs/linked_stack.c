#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Element{

	int data;
	struct Element *previous;
};

struct Element *top,*Element;
struct Element *createNode(int data){

	struct Element *addr = (struct Element *)malloc(sizeof(struct Element));

	if(addr != NULL){
		addr->data = data;
		addr->previous = NULL;
	
		return addr;
	}

	printf("UNABLE TO CREATE ITEM");

}


void Push(int data){

	Element = createNode(data);

	if(top == NULL){
		top = Element;
		printf("%d, ADDED TO STACK!!\n",top->data);
		return;
	}

	Element->previous = top;
	top = Element;
	printf("%d, ADDED TO STACK!i!\n",top->data);

	return;

	 
}

void peek(){

	if(top != NULL){
		printf("TOP ELEMENT: %d\n",top->data);
		return;
	}

	printf("CANNOT PEEK, STACK EMPTY!!\n");
	return;
}

void pop(){

	if(top != NULL){
		Element = top;
		top = top->previous;
		//top = Element->previous;
		printf("%d REMOVED FROM STACK!!\n",Element->data);
		free(Element);
		return;
		
	}

	printf("CANNOT REMOVE, STACK EMPTY!!\n");
	return;
}

void display(){

	Element = top;
	if(top == NULL || Element == NULL){
	
		printf("UNABLE TO DISPLAY, STACK EMPTY!!\n");
		return;
	}

	while(Element->previous != NULL)
	{
		printf("DATA = %d\n",Element->data);
		Element = Element->previous;
	}

	printf("DATA = %d\n",Element->data);
	return;
	 
}

bool isEmpty(){

	if(top == NULL){
		printf("STACK EMPTY\n");
		return true;
	}
	printf("STACK NOT EMPTY\n");
	return false;
}


int main(){

	top = createNode(22);
	Push(55);
	Push(33);

	display();
	pop();
	peek();
	pop();
	peek();
	Push(57);

	for(int i  = 0 ;i<5;i++)
	{
		Push(i*i);
	}
	pop();
	peek();
	pop();

	display();

	isEmpty();

	pop();
	pop();
	pop();

	pop();

	pop();
	pop();
	isEmpty();


	return 0;


}
