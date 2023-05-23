// Write a system programming your own version of cp command?
#include<stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main(int argc, char *argv[])
 {
   int f1, f2;
   char buff[50];
   long int n;

 if(((f1 = open(argv[1], O_RDONLY)) == -1 || ((f2=open(argv[2], O_CREAT |  O_WRONLY | O_TRUNC, 0700))== 1)))  // first we open f1 file in read mode only and f2 file either created in write mode 0700 used for giving permission for read wite exexute that file.
    {
       perror("problem in file");
       exit(1);
    }

 while((n=read(f1, buff, 50))>0)   // here n gives us number of bytes read is returned and the file position is advanced by this number

     write(f2, buff, n);
       close(f2);
       exit(0);
 }
