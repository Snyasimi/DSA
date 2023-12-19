#include<stdio.h>
#include<stdlib.h>

struct Node {
	
		int data;
		struct Node* next;
	};

	struct Node *head,*newNode,*temp,*previous;
	int numberOfNodes = 0;

	struct Node* createNode(int data){
	
		struct Node* addr = (struct Node*) malloc(sizeof(struct Node*));
		if(addr != NULL)
		{
			addr->data = data;
			numberOfNodes++;
			return addr;
		}
		printf("Could not create Node");

		exit(1);

	}

	void insertBegining(int data){
	
		if(head != NULL){

			newNode = createNode(data);
			newNode->next = head;
			head = newNode;
			return;
		}

		newNode = createNode(data);

		return;

	}

	void Set(int position,int value){
	
		temp = head;

		if(position <= numberOfNodes){
		
			for(int i = 1; i <= numberOfNodes; i++){
			
				if( i == position){
				
					temp->data = value;
					return;

				}
				temp = temp->next;
			}	
		}

		printf("Position Invalid\n");
		return;

	}

void Display(){

	if(head != NULL){	

		temp = head;

		while(temp->next != NULL){
			printf("%d->",temp->data);
			temp = temp->next;
		}

		printf("%d\n",temp->data);
		return;
	}

	printf("List Empty");
	return;
}

void insertEnd(int data){

	temp = head;

	while(temp->next != NULL){

		temp = temp->next;
	}

	temp->next = createNode(data);
}

void deleteNode(int data){

	//Detele a node by data
	temp = head;
	previous = head;

	if(head->next==NULL && head->data == data){
	
		free(head);
	}
	while(temp->next != NULL){

		if(temp->data == data){
			//delete node and join links
			previous->next = temp->next;
			free(temp);
		}

		previous = temp;
		temp = temp->next;
	}
}

/* struct Node * */int get(int data){

	//Return the element's address
	temp = head;
	while(temp->next != NULL ){
	
		if(temp->data == data){
		
			return temp->data;
		}
		temp = temp->next;
	}

	printf("No element found");
}

struct Node *indexOf(int value){

	temp = head;
	if(head == NULL)
	{
		printf("List empty");
		exit(1);
	}

	while(temp->next != NULL){
	
		if(temp->data == value){
		
			return temp;
		}

		temp = temp->next;
	}
}


void insertAt(int position,int data){

	temp = head;
	//previous = head;

	

	for(int i = 1; i < position; i++){
		previous = temp;
		temp = temp->next;
	}

	if(temp == head){
	
		insertBegining(data);
		return;
	}
	
	newNode = createNode(data);
	newNode->next = temp;
	previous->next = newNode;

	return;
}
	



int main(){

	head = createNode(55);
	insertBegining(22);
	insertBegining(90);
	insertBegining(27);
	insertEnd(23);
	insertAt(3,62);
	insertAt(1,100);
	//insertAt(200,5);
	Set(1,33);

	Display();

	deleteNode(55);
	Display();

	printf("\nINDEX is:%p",indexOf(22));
	printf("\nELEMENT: %d",get(22));
	printf("\nNUMBER OF NODES = %d",numberOfNodes);



}
