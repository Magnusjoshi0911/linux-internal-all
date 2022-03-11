#include<pthread.h>
pthread_t tid;
void *thr_fu(void *arg)
{
pid_t pid;
pthread_t tid;
pid=getpid();
tid=pthread_self();
printf("pid %u tid %u\n",(insigned int)pid,(unsigned int)tid);
return 0;

}
int main(void)

{
int err;
err=pthread_creat(&tid,NULL,thr_fu,NULL);
if(err!=0)
{
printf("cant creat thread: %s\n",strerror(err));
while(1);
exit(0);
}
}

