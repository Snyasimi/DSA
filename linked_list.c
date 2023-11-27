#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL, *newNode, *temp;


struct Node * create_node(int Data)
{
    struct Node *addr = (struct Node *)malloc(sizeof(struct Node));
    
    addr->data = Data;
    addr->next = NULL;

    if(head == NULL)
    {
        head = addr;
        return addr;
    }

    return addr;

}

void add_node_end(int data)
{
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = create_node(data);
}

void add_node_front(int data)
{
    if(head == NULL){
        newNode = create_node(data);
        return;
    }
    newNode = create_node(data);
    temp = head;
    newNode->next = temp;
    head = newNode;
    return;

}

void display()
{
    temp = head;
    while(temp->next != NULL)
    {

        printf("%d",temp->data);
        temp = temp->next;

    }
}

 void remove_node(int data)
{
    struct Node *previous = NULL;
    temp = head;

    while(temp->data != data)
    {
        previous = temp;
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        free(temp);
        free(previous);
        printf("NODE DELETED");
        return;
    }

    previous->next = temp->next;
    free(temp);





}



int main()
{


    int choice;
    char value;
    int choice2;

    printf("\t\t*********ENTER AN OPTION*********\t\t\n");
    printf("\tA)ADD TO LINKED LIST=>(1)\t\n\tB)REMOVE VALUE FROM LINKED LIST=>(2)\t\n\tC)DISPLAY LINKED LIST=>(3)\t\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            
            printf("SELECT (F) TO ADD INFRONT AND (B) TO ADD AT THE END\n");
            scanf(" %c",&value);
            printf("ENTER DATA TO ADD");
            scanf(" %d",&choice2);
            printf("%d",choice2);

            if(value == 'F'){
                add_node_front(choice2);
            }
            else{
                add_node_end(choice2);
            }

        break;

        default: 
        printf("nothing works");
    }

    
    return 0;
}