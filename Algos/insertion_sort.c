#include<stdio.h>

int main()
{

	int j,temp;
	int Array[9] = {20,5,14,21,7,9,2,25};

	//insertion sort//
	/*
	*this loop will loop through elements comparing an element in its position with the ones behind it
	*if the element behinf it is smaller than it,
	*it switches places with it until  it finds a place where it belongs
	
	*say you have 3,2,1 the loop will start at position 2 [element 2],
	it'll compare it with the element before it  which is [elemnt3],if its greater itll switch places,
	no say we are at the end and the list is in the form 2,3,1 ,
	now we will be at position 3 (where 1 is) , the loop will start from the element before it (3) which is position 2,
	it will compare moving backwards till 1 is at position 1 f the array,
	this is how the events will occur
	-> 2,3,1
	->is 1 > 3....(yes)
	->move 3 to where 1 is and move 1 to where 3 was.
	->now we have 2,1,3
	->next comparison is 1 > 2 (yes)
	->move 2 to where 1 is and move 1 to where 2 was.
	->now we have, 1,2,3
	   
	*/
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
