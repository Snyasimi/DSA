#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

int main(){

	int std_in = 0;
	int std_out = 1;
	
	int fd_4 =  open("TEST_1.txt",O_CREAT | O_RDWR,0771);
	

	char my_name[20];
	char data[20];

	printf("Enter YourName:\n");
	read(std_in,my_name,sizeof(my_name));

	size_t written = write(fd_4,my_name,sizeof(my_name));

	if(written>0){
	
		printf("data written\n");
		close(fd_4);


		int fd_5 = open("TEST_1.txt",O_RDONLY);

		ssize_t NOB = read(fd_5,data,sizeof(data));

		printf("\nDATA FROM FILE => %s\n\n",data);
		printf("Number ssize_t = %d",NOB);


		return 0;
	}

	printf("failed to write\n");





	return 0;
}
