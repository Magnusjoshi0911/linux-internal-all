#include<stdio.h>
#include<string.h>

int main()
{
char buf1[10];
char buf2[10];
int ret;
memcmp(buf1,"madam",5);
memcmp(buf2,"mad",5);
ret=memcmp(buf1,buf2,5);
if(ret>0)
{
printf("bufer 1 is greter then buf 2\n");
}
else if(ret<0)
{
printf("buffer 1 is less then buf 2\n");
}
else{
printf("buf1 equal to buf2\n");
}
return 0;
}
