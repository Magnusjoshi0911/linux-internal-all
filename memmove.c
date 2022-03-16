#include<stdio.h>
#include<string.h>
int main()
{
char dest[]="oldstring";
const char src[]="newstring";
printf("before moving dest=%s,src=%s\n",dest,src);
memmove(dest,src,3);
printf("after moving dest=%s,src=%s\n",dest,src); 
return 0;
}

