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

return 0;
}
