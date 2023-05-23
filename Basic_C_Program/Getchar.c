// Write a system programming your own version of getchar() standard C Library
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
    char buff[1],count;
   count=read(0,buff,sizeof(char));   

    
    return 0;
}
