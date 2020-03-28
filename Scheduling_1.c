#include<stdio.h>
int at_1[20],at_2[20],p2[20],p2[20],at_3[20];
int bt_1[20],bt_2[20],bt_3[20];

int c=0,t1=0,t2=0,t3=0;

int n,i,at[20],bt[20],pr[20],j=0,y=0,z=0;

int total,x,temp[20],count=0;
float avg_waiting1=0.0,avg_turnaround1=0.0;

int p,wt3[20],tt3[20];
float avg_waiting3=0.0,avg_turnaround3=0.0;

int position,q,temp1,sum=0,wt2[20],tt2[20];
float avg_waiting2,avg_turnaround2;

void rr_schedule()
{
	printf("Time Quantum : 4\n");
	for(i=0;i<j;i++)
	{
		temp[i]=bt_1[i];
	} 
	printf("\nP_ID\tBurst time\t Turnaround time\t Waiting time\n");
	x=j;
    for(i=0; total=0; x!=0) 
    { 
    	if(temp[i]<=4 && temp[i]>0) 
        {
			printf("\nP[%d] of Q1 is running for %d units",i+1,temp[i]); 
            total=total+temp[i]; 
            temp[i]=0; 
            count=1; 
        } 
        else if(temp[i] > 0) 
        {
			printf("\nP[%d] of Q1 is running for 4 units",i+1); 
            temp[i]=temp[i]-4; 
            total=total+4; 
        } 
        if(temp[i]==0 && count==1) 
        { 
            x--; 
            printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt_1[i],total-at_1[i],total-at_1[i]-bt_1[i]);
            avg_waiting1 = avg_waiting1+total-at_1[i]-bt_1[i]; 
            avg_turnaround1 = avg_turnaround1+total-at_1[i]; 
            count = 0; 
        } 
        if(i==j-1) 
        {
            i=0; 
        }
        else if(at_1[i+1]<=total) 
        {
            i++;
        }
        else 
        {
            i=0;
        }
    } 
    avg_waiting1 = avg_waiting1/j;
    avg_turnaround1 = avg_turnaround1/j;
    printf("\nAverage Waiting Time  :: %f", avg_waiting1); 
    printf("\nAverage Turnaround Time  :: %f\n", avg_turnaround1); 
}

rr_schedule();
return 0;

}
