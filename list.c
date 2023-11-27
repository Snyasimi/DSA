#include<stdio.h>

#define MAX  10

int V[MAX] = {1,23,17,4,-5,100};

int n = 6,j ;

//insert func

void list_insert(int listname[],int x,int i)
{

    if(i>n || n>MAX-2)
    {
        printf("Overflow Error\n");
        return;
    }

    else if(i<0)
    {
        printf("invalid position");
        return;
    }

    j=n-1;

    while( j>=i )
    {
        listname[j+1] =  listname[j];
        j=j-1;
    }

    listname[i] = x ;
    n = n+1;

}

int main()
{
    int i = 0,x=0,j=0;

    printf("Enter your position < %d\n",MAX-1);
    scanf("%d",&i);

    printf("Enter your Element\n");
    scanf("%d",&x);

    printf("Position is %d\n",i);
    printf("Element is %d\n",x);

    printf("---BEFORE INSERTION------\n");
    
    for(j=0;j<n;j++)
    {
        printf("V[%d] = %d\n",j,V[j]);
    }

    list_insert(V,x,i);

    printf("\n--------AFTER INSERTION------=\n");


    for(j=0;j<n;j++)
    {
        printf("V[%d] = %d\n",j,V[j]);
    }

    return 0;

    
}