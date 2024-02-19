#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>



int main(){


	char file_name[30];
	char contents[100];
	printf("Enter name of file to read from\n");
	scanf("%s",file_name);

	int fd = open(file_name,O_RDONLY);

	if(fd < 0 )
	{
	
		printf("Problem reading file or file does not exist");
		return 0;
	}

	ssize_t data_read = read(fd,contents,sizeof(contents));

	if (data_read < 0){
	
		printf("error reading");
		return 0;
	}

	printf("printing data read....\n");
	printf("%s",contents);

	return 0;


}
