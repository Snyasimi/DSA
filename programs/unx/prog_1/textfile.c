#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){


	char name_of_file[30];
	char highschool[30];
	char university[30];

	printf("Enter the name of the file that u wish to create\n");
	scanf("%s",&name_of_file);

	int fd = open(name_of_file,O_APPEND | O_RDWR | O_CREAT,0777); 

	if(fd < 0){
	
		printf("Error openning file");
		return 0;
	}

	printf("Enter the name of the highschool you went\n");
	scanf("%s",&highschool);

	printf("Enter the name of your collage\n");
	scanf("%s",&university);

	ssize_t data_w = write(fd,highschool,sizeof(highschool));

	if(data_w < 0){
	
		printf("Error writting");
	}

	data_w = write(fd,university,sizeof(university));

	if(data_w < 0){
	
		printf("Error writing");
	}

	return 0;



}
