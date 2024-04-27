#include<stdio.h>
#include<stdbool.h>

#define SIZE 10

int front = -1;
int rear = -1;

int Array[SIZE];


void enQueue(int data){

	if( rear == SIZE -1)
	{
	
		printf("\nOVERFLOW ERROR, QUEUE FULL!!\n");
		return;
	}
	else if ( front == -1 && rear == -1)
	{
	
		front++;
		rear++;
		Array[rear] = data;
	//printf("\nFront index is %d\nElement is %d\nelseif\nrear is %d\n",front,Array[front],rear);
		return;

	}

	rear++;
	Array[rear] = data;
	//printf("\nFront index is %d\nElement is %d\nrear is%d\n",front,Array[front],rear);

	return;

}

void deQueue(){

	if(front == -1)
	{
	
		printf("\nUNDERFLOW ERROR, QUEUE EMPTY!!\n");
		return;
	}
	else if(front == rear && rear == SIZE -1)
	{
	
		printf("%d DEQUEUED\n",Array[front]);
		front = rear = -1;
		return;
	}

	printf("\n\t%d DEQUEUED\n",Array[front]);
	front++;
	//printf("\nFront index is %d\nElement is %d\nrear is%d\n",front,Array[front],rear);

	return; 
}

void display(){

	if( front != -1 && rear != -1)
	{
		printf("\n\tDisplaying items in queue\n");
		for(int i = front ; i <= rear; i++)
		{
			printf("%d<-",Array[i]);
		}

		return;
	}

	printf("\nNO ITEMS IN THE QUEUE\n");
}


int main(){


	int choice,data;
	while(true){
	
		printf("\n\tPlay with Queue\t\n");

		printf("Please select an action\n1.ADD DATA(enqueue).\n2.REMOVE DATA(dequeue)\n3.Display items in queue\n4.Exit\n");
		scanf("%d",&choice);

		if(choice == 4){
		
			break;
		}

		switch(choice){
		
			case 1:
				printf("ENTER DATA TO ADD[SHOULD BE AN INTEGER]: \n");
				scanf("%d",&data);
				enQueue(data);
				break;

			case 2:
				deQueue();
				break;

				
			case 3:
				display();
				break;

			default:
				printf("Please select a valid choice");
				break;

		}
		

	}

	//Queues
	//enQueue()
	//deQueue()
	

	return 0;
}
