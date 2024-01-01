#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node {
	
		int data;
		struct Node* next;
		struct Node* previous;
	};

	struct Node *head=NULL,*newNode,*temp,*previous;
	int numberOfNodes = 0;

	struct Node* createNode(int data){
	
		struct Node* addr = (struct Node*) malloc(sizeof(struct Node*));
		if(addr != NULL)
		{
			addr->data = data;
			addr->previous = NULL;
			numberOfNodes++;

			if(head == NULL){
			
				head = addr;

			}

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

	printf("LIST EMPTY\n");
	return;
}

void insertEnd(int data){

	temp = head;

	while(temp->next != NULL){

		temp = temp->next;
	}

	temp->next = createNode(data);
	temp->next->previous = temp;
}

void deleteNode(int data){

	//Detele a node by data
	if(head == NULL){
	
		printf("\nLIST EMPTY\n");
		return;
	}
	temp = head;
	
	if(head->next==NULL && head->data == data){
	
		free(head);
		return;
	}
	while(temp->next != NULL){

		if(temp->data == data){

			if(temp == head){
			
				head = head->next;
				free(temp);
				return;
			}
			//delete node and join links 
			previous->next = temp->next;
			temp->next->previous = previous;
			free(temp);
			return;
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
	return 0;
}

struct Node *indexOf(int value){

	temp = head;
	if(head == NULL)
	{
		printf("List empty");
		return 0;
	}

	while(temp->next != NULL){
	
		if(temp->data == value){
		
			return temp;
		}

		temp = temp->next;
	}
}


void insertAt(int position,int data){

	if(head == NULL){
	
		printf("LIST EMPTY!!\nADD ITEMS TO CONTINUE\n");
		return;
	}
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


	printf("**\t**LISTS C PROGRAM**\t**\n");

	printf("Select a choice to continue\n");
	int choice = 0;
	int data,position;

	while(true){
	
		printf("\tPICK A NUMBER\n1.INSERTAT BEGINING\n2.INSERT AT END\n3.SELECT A POSITION TO INSERT\n4.UPDATE A VALUE IN A GIVEN POSITION\n5.DISPLAY LIST\n6.DELETE A NODE\n7.QUIT\n: ");

		scanf("%d",&choice);

		if(choice == 7){
			printf("EXITING PROGRAM....\n");
			break;
		}

		switch(choice){
		
			case 1:
				printf("\nENTER DATA TO INSERT\n:");
				scanf("%d",&data);
				insertBegining(data);
				printf("\nDisplaying updataed list\n");
				Display();
				break;
			case 2 :

				printf("\nENTER DATA TO INSERT\n:");
				scanf("%d",&data);
				insertEnd(data);
				printf("\nDisplaying updataed list\n");
				Display();
				break;

			case 3 :
				printf("\nENTER DATA TO INSERT\n:");
				scanf("%d",&data);
				printf("ENTER POSITION TO INSERT\n:");
				scanf("%d",&position);
				insertAt(position,data);
				printf("\nDisplaying updataed list\n");
				Display();
				break;
			case 4 :

				printf("\nENTER DATA TO UPDATE\n:");
				scanf("%d",&data);
				printf("ENTER THE POSITION TO UPDATE\n:");
				scanf("%d",&position);
				Set(position,data);
				printf("\nDisplaying updataed list\n");
				Display();
				break;
			case 5 :
				printf("\nDisplaying List\n");
				Display();
				break;
			case 6 :
				printf("ENTER THE DATA YOU WANT TO DELETE\n:");
				scanf("%d",&data);
				deleteNode(data);
				printf("\nDISPLAYING UPDATED LIST\n");
				Display();
				break;


		}
	}
	return 0;


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
