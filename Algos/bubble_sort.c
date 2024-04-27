#include<stdio.h>

int main(){

    int size = 9,temp;

    int Array[9] = {20,5,14,21,7,9,2,25,4};

    

	/*start loop, to make nine passes*/
    for(int i=0;i<size-1;i++)
    {

		/*
		 *this is the loop that walks through the array comparing the elements
		 *when the outer loop is in its first iteration, 
		 *it waits for this loop below to run for 9 times
		 *comparing each element in the array  
		*/
        for(int j=0;j<size-1;j++)
        {
            if(Array[j] > Array[j+1])
            
            /* If the element infront of me is less than me,
            	 *swap my position to its position
            	 *to that of the elemnt then put whatever is in temp to my previous location
            */ 
            
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
