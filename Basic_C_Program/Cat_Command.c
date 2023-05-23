// Write a system programming your own version of cat command?

#include<fcntl.h> //header file for file operations
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/file.h>
int main(int argc,char*argv[])
{
        if(argc!=2){ //checks if two arguments are present
        
            printf("\nThe syntax should as be follows");
        
            printf("\nCommandname filetoread\n");
        
            exit(1);
        }       
int f1,count;
char buffer[2048]; //characer buffer to store the bytes

f1=open(argv[1], O_RDONLY);
flock(f1,LOCK_EX);        
        if(f1==-1)
        {
        printf("cannot open file");
        exit(1);
        }
        while((count=read(f1,buffer,sizeof(buffer)))>0) //displaying the content
        {
        printf("%s",buffer);
        }
exit(0);
}
