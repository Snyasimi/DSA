#include<stdio.h>

int main()
{

	int Array[8] = {20,5,14,21,7,9,2,25};
      
	int i,j,temp,min_indx;

	for(i=0; i<8; i++)
	{
		min_indx = i;

		for(j=i+1 ; j<8-1; j++)
		{
			if(Array[min_indx] > Array[j])
			{
				min_indx = j;
			}
			temp = Array[i];
		        Array[i] = Array[min_indx];
                        Array[min_indx] = temp;

		}

		
	}

	for(int m = 0 ; m<8 ; m++)
	{
	
		printf("- %d -",Array[m]);
	}

	return 0;

}
