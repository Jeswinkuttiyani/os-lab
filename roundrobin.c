#include<stdio.h>
void main()
{
int tot=0,lim,tq,flag=0,i;
printf("Enter the number of process and time quantum:\n");
scanf("%d%d",&lim,&tq);
int bt[lim],pid[lim],rt[lim],tat[lim],wt[lim];
float avg_wt=0,avg_tat=0;
for(i=0;i<lim;i++){
printf("Enter the process id and brust time of process  %d:\n",i+1);
scanf("%d%d",&pid[i],&bt[i]);
rt[i]=bt[i];
}

while(flag!=lim){
  for(i=0;i<lim;i++){
   if(rt[i]>tq){
     tot=tot+tq;
     rt[i]=rt[i]-tq;
     }
   else if(rt[i]==0){
   
     continue;
     }
   else{
     tot+=rt[i];
     rt[i]=0;
     tat[i]=tot;
     wt[i]=tot-bt[i];
     flag++;
     }
   }
 }
 for(i=0;i<lim;i++)
 {
avg_tat+=tat[i];
avg_wt+=wt[i];
}
printf(" pid\tbt\ttat\twt\n");
for(i=0;i<lim;i++){
printf(" %d\t%d\t%d\t%d\n",pid[i],bt[i],tat[i],wt[i]);
}
printf("Average wt=%f\n",avg_wt/lim);
printf("Average tat=%f\n",avg_tat/lim);
    
} 
  
