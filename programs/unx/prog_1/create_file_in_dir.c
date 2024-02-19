#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){


	char data[30];
	int fd = open("Hwdir/hw.txt",O_CREAT | O_RDWR,0742);


	if(fd > 0){
	
		printf("Enter data to write in file\n:");
		scanf("%s",&data);
		write(fd,data,30);
		return 0;
	}

	printf("Error creating file\n");
	return 0;




}
