#include<stdio.h>

int main(){

    int size = 9,temp;

    int Array[9] = {20,5,14,21,7,9,2,25,4};

    

    for(int i=0;i<size-1;i++)
    {

        for(int j=0;j<size-1;j++)
        {
            if(Array[j] > Array[j+1])
            {
               temp =  Array[j];
               Array[j] = Array[j+1];
               Array[j+1] = temp;
            }
        }

    }

    for(int k=0; k<size;k++)
    {
        printf(" |%d| ",Array[k]);
    }

    return 0;
}