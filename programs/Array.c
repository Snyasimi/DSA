#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_SIZE 20
int Array[MAX_SIZE];
int SIZE = 0;

void insert_at(int position,int data){

	if(position <= 0 || position > MAX_SIZE-1){
	
		printf("INVALID POSTITION, PLEASE ENTER POSITIONS BETWEEN 1-%d",MAX_SIZE);
		return;
	}

	for(int i = SIZE-1 ; i > position-1 ; i--){
	
		Array[i+1] = Array[i];
	}

	Array[position-1] = data;
	SIZE++;
	return;
}

void insert_end(int data){

	if(SIZE < MAX_SIZE){

		Array[SIZE] = data;
		SIZE++;
		return;
	};

	printf("Array Full");
	return;
}

void display(){

	for(int i = 0;i < MAX_SIZE ; i++){

		printf("|%d|",Array[i]);
	
	}
	return;
}



int main(){

int position,data,choice;
	printf("***\tPLAY WITH AN ARRAY\t***\n");

	while(true){

		printf("\nPLEASE SELECT A CHOICE\n1.INSERT DATA AT A SPECIFIED LOCATION.\n2INSERT DATA AT THE END OF ARRAY\n3.DELETE AN ITEM AT A SERTAIN POSITION\n4DELETE DATA IN A SPECIFIED INDEX\n5.QUIT\n:");
		scanf("%d",&choice);
		if(choice == 5){
		
			break;
		} 

		switch(choice){
		
			case 1:
				printf("ENTER POSITION TO INSERT\n:");
				scanf("%d",&position);
				printf("ENTER DATA TO INSERT\n");
				scanf("%d",&data);
				insert_at(position,data);
				display();
				break;
			case 2:
				printf("\nENTER DATA TO INSERT\n:");
				scanf("%d",&data);
				insert_end(data);
				display();
			case 3:
				printf("\nENTER POSITION TO DELETE FROM\n:");
				display();
				break;
			case 4:
				printf("\nDELETING THE LAST ITEM.....\n");
				display();
				break;
			default:
				printf("INVALID CHOICE\n");



		}

	}

	return 0;


}

