#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd1,fd2,fd3;
fd1=open("linux.txt",O_WRONLY|O_CREAT|O_TRUNC);
fd3=fcntl(fd1,F_DUPFP,55);


}
