#include<stdio.h>
#include<stdlib.h> 
#define MAX 5
int front=0,back=-1,cs=0,nf; 
int f[MAX]; 
void enq(int x); 
void deq(void); 
void dis(void); 
int isfound(int); 
void main()
{
	int pf=0,rfs,rf[15],i; 
	printf("\n FIFO page replacement");
	printf("\n Enter the size of reference string:");
	scanf("%d",&rfs); 
	printf("\n Enter the reference string:");
	for(i=0;i<rfs;i++)
	{
		scanf("%d",&rf[i]);
	}
	printf("\n Enter the number of free frames:");
	scanf("%d",&nf);
	enq(rf[0]);
	pf=1;
	for(i=0;i<rfs;i++)
	{
		if(!isfound(rf[i]))
		{
			pf++;
			if(cs==nf)
			deq();
			enq(rf[i]);
		}
		dis();
	}
	printf("\n No of page faults :%d",pf);
}
int isfound(int x)
{
	int i; 
	for(i=0;i<cs;i++)
		{
		if(f[i]==x)
	  		{
	  			return 1;
	  		}
		}
	return 0;
}
void enq(int x)
{
	if(++back==nf)
	back=0;
	f[back]=x; 
	cs++;
}
void dis()
{
	int i; 
	for(i=0;i<cs;i++)
	printf("%d",f[i]); 
	printf("\n");
}
void deq()
{
	cs--;
	if(++front==nf)
	front=0;
	return;
}
