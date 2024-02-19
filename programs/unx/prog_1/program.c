#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


void readfile(){

        char file_name[30];
        char data[30];

        printf("Enter the file name to read\n");
        scanf("%s",&file_name);
        int fd = open(file_name,O_RDONLY);
        // printf("Enter data to read\n");
        // scanf("%s",data);
        ssize_t data_r = read(fd,data,sizeof(data));
    
        if (fd < 0){

            printf("Error opening file\n");
            return;
        }

        if (data_r < 0 ){

        printf("failed to read data or file doesnt exist");
        return;
    
        }

        printf("Data read is \n%s",data);

        return;


    }

    void writefile(){

        char buffer[30];
        char filename[30];

        printf("Enter the file name to write data to\n:");
        scanf("%s",&filename);

        int fd = open(filename,O_CREAT | O_WRONLY,0741);

        if(fd > 0){

            printf("Enter data to write to the file\n:");
            scanf("%s",&buffer);

            ssize_t data_w = write(fd,buffer,30);

            if(data_w > 0 ){

                printf("Data writtten\n");
                return;
            }

            printf("Could not write data");
            return;
        }
        printf("Could not open file\n");
        return;

    }

    void make_dir(){

        char dirname[30];
        printf("Enter directory name\n:");
        scanf("%s",&dirname);

        if(mkdir(dirname,0741) < 0 ){
            printf("Error while creating the  directory\n");
            return;
        }
        printf("Directory created\n");
        return;

    }

int main(){


    int choice;

    while(1){
    
    
    	printf("Enter a choice\n1. CREATE A DIRECTORY(1)\n2.READ A FILE(2)\n3.WRITE A FILE(3)\n4.EXIT(4)\n:");
    	scanf("%d",&choice);
    
    	if(choice == 4){
    		printf("EXIT....\n");
    		break;
    
    	}

    	switch(choice){

        	case 1:
                	make_dir();
                	break;

			case 2:
				readfile();
				break;
			case 3:
				writefile();
				break;

			default:
				printf("Invalid choice");
    	}
    
    }




return 0;

}
