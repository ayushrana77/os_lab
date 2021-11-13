#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#define max 20 
int main() 
{
	pid_t pid;
	int a[max],n,sum=0,i,status;
	printf("\nEnter the no of terms in the array :");
	scanf("%d",&n); printf("\nEnter values in the array : ");
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	
	pid=fork();
	wait(&status); 
	if(pid==0)
	{
		for(i=0;i<n;i++)
		{	
			if(a[i]%2==0)
			{		
				sum= sum+a[i ];

			}
		
		}
		printf("Sum of even nos = %d\n",sum);
		exit(0);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			{
				sum=sum+a[i];
			}
			
		}
		printf("Sum of odd nos = %d\n",sum);
	}
	
	return 0;
}
