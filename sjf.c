#include<stdio.h>
void main()
{
float tot_tat,tot_wt; 
int i,j,lim,temp;
printf("Enter the limit\n");
scanf("%d",&lim);
int pid[lim],bt[lim],wt[lim],tat[lim];
for(i=0;i<lim;i++){
printf("Enter the process id and brust time of process %d\n",i+1);
scanf("%d%d",&pid[i],&bt[i]);
}
for(i=0;i<lim;i++){
for(j=i+1;j<lim;j++){
if(bt[i]>bt[j]){
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
}
}
}
wt[0]=0;
tat[0]=bt[0];
for(i=1;i<lim;i++){
wt[i]=wt[i-1]+bt[i-1];
tot_wt=tot_wt+wt[i];
}
tot_wt=tot_wt+wt[0];
for(i=1;i<lim;i++){
tat[i]=tat[i-1]+bt[i];
tot_tat=tot_tat+tat[i];
}
tot_tat=tot_tat+tat[0];

printf("waiting time\n");
printf("waiting time of 1 is %d\n",wt[0]);
for(i=1;i<lim;i++){
printf("waiting time of %d is %d\n",pid[i],wt[i]);
}
printf("average waiting time = %f\n",tot_wt/lim);
printf("turn around time\n");
printf("tat of 1 is %d\n",tat[0]);
for(i=1;i<lim;i++){
printf("tat of %d is %d\n",pid[i],tat[i]);
}
printf("average turn around time = %f\n",tot_tat/lim);
}
