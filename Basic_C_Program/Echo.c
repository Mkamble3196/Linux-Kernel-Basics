//Write a system programming your own version of echo command

#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
#include<unistd.h>
#include<string.h>
int main(int argc,char *argv[])
{

    int count=0;

    if(argc<2)
    {
        perror("File is Not Open");

    }

    for(count=1;count<argc;count++)  //iteration for the so many arguments 
    {
        write(1,argv[count],strlen(argv[count]));/// used strlen for get lentgh of the string and write that much data and display it on screen by using "1"
        write(1," ",1);// spacing purpose
   }


}
