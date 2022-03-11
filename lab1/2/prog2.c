#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	switch(fork())
	{
	case 0:
		printf("Дочерний процесс: %d\n", getpid());
		break;
	default:
		printf("Основной процесс: %d\n", getpid());
		break;
	}
	return 0;
}
