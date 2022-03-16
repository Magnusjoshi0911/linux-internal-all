#include<stdio.h>
#include<string.h>
int main()
{
const char str[]="MAYURJOSHI.COM";
const char ch="#";
printf("before using mamset: %s\n",str);
memset(str,ch,strlen(str));
printf("after useing memset : %s\n",str);
return 0;
}
