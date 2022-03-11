#include<pthread.h>
static void* threadfunc(void *arg)
{
char *s=(char*)arg;
printf("%s\n",s);
sleep(5);
return (void*)strlen(s);

return 0;
}
int main(int arg,char *argv[])
{
pthread_t t1;
void *res;
int s;
s=pthread_creat(&t1,NULL,threadfunc,"hello world");
printf("massages from main()\n");
sleep(3);
pthread_join(t1,&res);
exit(0);
}
