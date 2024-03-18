#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
void main()
{
key_t j;
j=ftok(".","s");
printf("%d\n",j);
int val =shmget(j,1818,IPC_CREAT|0666);
printf("%d\n",val);
int *shat=shmat(val,NULL,0);
char data[45];
printf("Enter the data:\n");
scanf("%s",data);
strcpy(shat,data);
printf("%s\n",(char*)shat);
int datch=shmdt(shat);
printf("%d\n",datch);
int shctl=shmctl(val,IPC_RMID,NULL);
printf("%d\n",shctl);
}
