#include<stdio.h>

int main(){

    int min_indx,temp;


    int array[9] = {1,5,8,10,4,9,50,18,2};

    printf("Enter elements");

    for(int b = 0; b<size)

    for(int i = 0 ; i< 9-1 ; i++)
    {
        min_indx = i;

        for(int j = i + 1; j< 9 ; j++)
        {
            if(array[min_indx] > array[j])
            {
                min_indx = j;
            }
        }

        temp = array[i];
        array[i] = array[min_indx];
        array[min_indx] = temp;
        
    }

    for(int k = 0 ; k< 9 ; k++)
    {
        printf("%d\t",array[k] );
    }



    return 0;
}