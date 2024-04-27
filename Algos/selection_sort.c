#include<stdio.h>

int main()
{

	int Array[8] = {20,5,14,21,7,9,2,25};
      
	int i,j,temp,min_indx;

/* LOOP TO WALK THROUGH THE ARRAY*/
	for(i=0; i<8; i++)
	{
	
	/* When this loop starts it sets the minimum element to be loops current position,
	*in this case 0 which is the first position in the array
	*/
		min_indx = i;
	/* Notice min index is set ^^ */
		for(j=i+1 ; j<8-1; j++)
		{
		/*
		*this loop starts from the outer loop's current position +1,
		*this loop also walks the array to test for values that are less
		*compared the the current, if it finds one it sets it's position 
		*as the minimun index(lesser element compared to the current one
		*/
			if(Array[min_indx] > Array[j])
			{
				min_indx = j;
			}
			
			/* now here is where the swap occurs, the element at the min index ^^ which was set above,
			*gets swapped with the current element(outer  loop current iteration) 
			*/ 
			temp = Array[i];
		    Array[i] = Array[min_indx];
            Array[min_indx] = temp;
            /* say we have 3,2,1 , the outer loop starts at position 1 (which is 0 in a n array)
            * the inner loop starts infront of the first loop(outer loop position +1),
            *the first comparison is done 
            *-> is 3[min index,outer loop's position] > 2[outer +1] ( in this case yes)
            *->set the minimum index to be the position of the element which is lesser
            *in our case position 2,
            *now put the current element in temp storage, set this current position to hold
            *the value at min index, set the value at the position of min index to whatever eas put in temp
            *-> move loop forward and repeat
            */
            
            

		}

		
	}

	for(int m = 0 ; m<8 ; m++)
	{
	
		printf("- %d -",Array[m]);
	}

	return 0;

}
