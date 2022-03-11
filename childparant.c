#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
fork();
if(fork()==0)
{
execl("/bin/ls","ls",0);
printf("i exicute this program");
exit(0);

}
}
