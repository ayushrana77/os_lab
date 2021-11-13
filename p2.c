#include<stdio.h>
#include<unistd.h>

int main()
{
	fork();
	printf("LINXU\n");
	fork();
	printf("UNIX\n");
	fork();
	printf("RED HAT\n");
	return 0;
}
