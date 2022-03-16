#include<stdio.h>
#include<string.h>
int main()
{
char dest[]="oldstring";
const char src[]="newstring";
printf("before copy dest=%s,src=%s\n",dest,src);
memcpy(dest,src,9);
printf("after copy dest=%s,src=%s\n",dest,src); 
return 0;
}

