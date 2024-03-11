#include<stdio.h>
#include<unistd.h>
void main()
{
int bd;
bd=fork();
if(bd==0)
{
int lim;
printf("This is a child process\nprocess id is %d\n",getpid());
printf("Parent id is %d\n",getppid());
  printf("Enter the limit\n");
  scanf("%d",&lim);
  for(int i=1;i<=lim;i++)
  printf("%d\n",i);
}
else if(bd>0)
{
wait();
int num;

printf("This is a parent process\nprocess id is %d\n",getppid());
   printf("Enter a number\n");
   scanf("%d",&num);
   if(num%2==0){
    printf("%d is even number\n",num);
    }
   else{
   printf("%d is odd number\n",num);
   }
}
else
{
printf("fork failed/n");
}
}
