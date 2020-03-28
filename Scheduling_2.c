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
	printf("Time Quantun : 4\n");
	for(i=0;i<j;i++)
	{
		temp[i]=bt_1[i];
	} 
	printf("\nP_ID\tBurst time\t Turnaround time\t Waiting time\n");
	x=j;
    for(i=0, total=0; x!=0;) 
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


void fcfs_schedule()
{
	wt3[0] = 0;   
    for(i=1;i<z;i++)
    {
        wt3[i] = 0;
        for(p=0;p<z;p++)
        {
            wt3[i]=wt3[i]+bt_3[p];
        }
    }
    printf("\nProcess\t\tBurst time\tWaiting time\tTurnaround time\n");
    for(i=0;i<z;i++)
    {
        tt3[i]=bt_3[i]+wt3[i];
        avg_waiting3=avg_waiting3+wt3[i];
        avg_turnaround3 = avg_turnaround3+tt3[i];
        printf("\nP[%d]\t\t\t%d\t\t\t%d\t\t\t%d\n",i+1,bt_3[i],wt3[i],tt3[i]);
    }
    avg_waiting3=avg_waiting3/z;
    avg_turnaround3=avg_turnaround3/z;
    printf("\nAverage Waiting time  :: %f",avg_waiting3);
    printf("\nAverage Turnaround time  :: %f",avg_turnaround3);
    for(i=0;i<z;i++)
    {
    	while(bt_3[i]!=0)
    	{
    		if(bt_3[i]>10)
    		{
				printf("\nP[%d] of Q3 is running for 10 units",i+1);
				bt_3[i]=bt_3[i]-10;
			}
			else if(bt_3[i]<=10)
			{
				printf("\nP[%d] of Q2 is running for %d units",i+1,bt_3[i]);
				bt_3[i]=0;
			}
		}
	}
}


int main()
{
	printf("Enter the nunber of process :: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		printf("Enter the details of p[%d]\n",i+1);
		printf("Arrival time:");
		scanf("%d",&at[i]);
		printf("Burst time:");
		scanf("%d",&bt[i]);
		printf("priority_schedule(1 to 10):");
		scanf("%d",&pr[i]);
		total=total+bt[i];
	}
	for(i=0;i<n;i++)
	{
		if(pr[i]>=1&&pr[i]<=5)
		{
			printf("\n\nP[%d] belongs to Q1\n",i+1);
			at_1[j]=at[i];
			bt_1[j]=bt[i];
			j++;
			t1=t1+bt[i];
		}
		
		else if(pr[i]>=6&&pr[i]<=10)
		{
			printf("P[%d] belongs to Q2\n",i+1);
			at_2[y]=at[i];
			bt_2[y]=bt[i];
			p2[y]=pr[i];
			p2[y]=y+1;
			y++;
			t2=t2+bt[i];
		}
		
		else if(pr[i]>=11&&pr[i]<=10)
		{
			printf("P[%d] belongs to Q3\n\n",i+1);
			at_3[z]=at[i];
			bt_3[z]=bt[i];
			z++;
			t3=t3+bt[i];
		}
	}

	rr_schedule();
	fcfs_schedule();
	
	return 0;
}
