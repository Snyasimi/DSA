#include<stdio.h>

int main()
{

	int j,temp;
	int Array[9] = {20,5,14,21,7,9,2,25};

	//insertion sort//
	
	for(int i = 1; i < 9 ; i++)
	{
		temp = Array[i];
		j = i-1;
		while(j>=0 && Array[j]>temp)
		{
			Array[j+1] = Array[j];
			j--;
		}

		Array[j+1] = temp;
	}

	for(int k = 0; k<9 ; k++)
	{
		printf("-%d-",Array[k]);
	}

	return 0;

}
