#include<pthread.h>
#include<stdio.h>
struct my_thread
{
int thread_id;
char mesg[100];
};
void *printhello(void *threadobj)
{
pthread_t thread_ID;
struct my_thread *t1
t1=(struct my_thread *)threadobj;
thread_id=pthread_self();
printf("\n thread id: %u",thread_id);
printf("\n %d thread message :%s\n",t1->thread_id,t1->mesg);
}
int main()
{
pthread_t thread2,thread3,thread4,thread_id;
int rc;
struct my_thread t2,t3,t3,t4;
t4.thread_id=4;
strcpy(t4.mesg,"i am forth thread\n");
t2.thread_id=2;
strcpy(t2.mesg,"i am second thread\n");
t3.thread_id=3;
strcpy(t3.mesg,"i am third thread\n");
thread_id=pthread_self();
printf("\n main thread id : %u",thread_id);

pthread_create(&thread4,NULL,printhello,(void *)&t4);
pthread_create(&thread2,NULL,printhello,(void *)&t2);
pthread_create(&thread3,NULL,printhello,(void *)&t3);

printf("\n exit from main thread\n");
pthread_exit(NULL);
}
