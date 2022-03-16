#include<stdio.h>
#include<string.h>
int main()
{
const char str[]="mayurkumar.com";
const char ch=".";
char *ret;
printf("before using mamset: %s\n",str);
ret=memrchr(str,ch,strlen(str));
printf("string after **%c** is - **%s**\n",ch,ret+1);
return 0;
}
