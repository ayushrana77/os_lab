#include<stdio.h>

#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	int status;
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("I m Child\n");
		exit(0);
	}
	else
	{
		wait(&status); 
		printf("I m Parent\n");
		printf("The Child PID=%d\n", pid);
	}
	return 0;
}
