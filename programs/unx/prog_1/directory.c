#include<stdio.h>
#include<sys/stat.h>


int main(){


	char dir_name[30];

	printf("Enter the name of the directory u wish to create\n");
	
	scanf("%s",&dir_name);
	printf("%s",dir_name);


	if(mkdir(dir_name,0777) < 0)
	{
	
		printf("Error creating the directory\n");
		return 0;
	}

	printf("Directory created\n");

	return 0;

}
