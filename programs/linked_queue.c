#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node {

    int data;
    struct Node *next;

};

struct Node *head=NULL,*tail=NULL,*temp=NULL;

 struct Node* createNode(int data){
    //Creating a new node

    temp = malloc(sizeof(struct Node));

    if(temp != NULL){
        temp->data = data;
        temp->next = NULL;
        return temp;
    }
    printf("Failed to allocate memory");
    return 0;


}

void enqueue(int data){
  //enqueue
    if(head != NULL){
        temp = createNode(data);
        tail->next = temp;
        tail = temp;
        return;
    }

    head = tail = createNode(data);
    return;


}

void dequeue(){
    //remove item from front
    //doesnt return the data
    if(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
        return;
    }

    printf("Queue EMPTY!!");
    return;

}

void display(){
    //walk from head(front) to back of list while printing
    if(head == NULL){
        printf("Queue EMPTY!!");
        return;
    }
    printf("\nVALUE INFRONT OF THE QUEUE IS: %d\nVALUE AT TAIL IS: %d\n\n",head->data,tail->data);
    temp = head;
    while(temp != NULL){
        printf("<-%d",temp->data);
        temp = temp->next;
    }
    printf("\n\n");
    return;

}


int main(){
    int choice,data;
    printf("***\tPLAY WITH A LINKED QUEUE\t***\n");
   while(true){

    printf("\tSELECT A CHOICE\n\t|1.ADD TO QUEUE\t|\n\t|2.REMOVE FROM QUEUE\t|\n\t|3.DISPLAY QUEUE\t|\n\t|4.EXIT\t|\n\t|:");
    scanf("%d",&choice);
        if(choice == 4){
            break;
        }

    switch(choice){

        case 1:
            printf("ENTER DATA TO ENQUEUE:\n");
            scanf("%d",&data);
            enqueue(data);
            // printf("PRINTING UPDATED QUEUE\n");
            // display();
            break;
        case 2:
            printf("Removing item from Queue...\n");
            dequeue();
            printf("Displaying updated Queue\n");
            display();
            break;
        case 3:
            printf("Displaying Queue\n");
            display();
            break;
        default:
            printf("SELECT OPTIONS 1-4");
            break;
    }

    


   }

return 0;
}