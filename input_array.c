#include<stdio.h>

int main() 
{

	int size,temp,min_index;
	
	printf("Enter array size :\n");
	scanf("%d",&size);
	
	int array[size];
	
	printf("Enter elements : ");
	
	for(int i= 0; i<size ; i++)
	{
	
		scanf("%d",&array[i]);
	
	}

	printf("Elements saved\n");


	//SORTING

	for(int i = 0 ; i <size -1 ; i++)
	{

		min_index = i;

		for(int j = i+1 ; j < size ; j++)
		{
			if(array[min_index] > array[j])
			{
				min_index = j;
			}
		}

		temp = array[i];

		array[i] = array[min_index];

		array[min_index] = temp;		

	}

	for(int elem = 0 ; elem < size ; elem++)
	{
		printf("%d\t",array[elem]);
	}


	return 0;

}
