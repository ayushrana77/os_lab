#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		sleep(6);
		printf("\n I m Child. My PID = %d And PPID = %d",getpid(),getppid());
	}
	else
	{
		printf("I m Parent. My Child PID = %d And my PID = %d",pid,getpid());
	}
	printf("\nTerminating PID = %d\n",getpid());
	return 0;
}
