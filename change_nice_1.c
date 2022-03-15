#include<pthread.h>
#include<stdio.h>
#include<errno.h>
int main()
{
int ret1,ret2,i,cnt=0;
errno=0;
ret1=nice(1);
ret2=nice(2);
if(ret1==-1&&errno!=0)
   perror("nice1");
else
    printf("nice value is now %d\n",ret1);

if(ret2==-1&&errno!=0)
   perror("nice2");
else
     printf("nice value is now %d\n",ret2);
    
while(1){
printf("process with a nice value %d count = %d\n",ret1,cnt);
printf("process with a nice value %d count = %d\n",ret2,cnt);
for(i=0;i<10;i++);
cnt++;
}
}
