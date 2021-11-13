#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main()
{
	pid_t pid;
	char arr[100],str[100];
	int fd[2],r,w;
	pipe(fd);
	pid=fork();
	if(pid==0)
	{
		printf("\nEnter a string: "); 
		gets(str);
		w=write(fd[1],str,strlen(str));
		printf("Child wrote %d bytes\n",w);
		exit(0);
	}
	else
	{
		r=read(fd[0],arr,sizeof(arr));
		arr[r]='\0';
		printf("Parent read %d bytes : %s\n",r,arr);
	}
	return 0;
}
