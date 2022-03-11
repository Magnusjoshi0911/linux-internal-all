#include<stdio.h>
#include<ftntl.h>
#include<unistd.h>

int main()
{
int fd,len;
int x;
char write_buf[60]="hey! its seek operation program!!";
char buf[300];
fd=open("abc.txt",O_CREAT | O_RDWR,0777);
printf("%d\n",fd);
len=write(fd,write_buf,60);
printf("return value from write operation:%d\n",len);
lseek(fd,0,SEEK_SET);
printf("%d\n",buf);
return 0;

}
