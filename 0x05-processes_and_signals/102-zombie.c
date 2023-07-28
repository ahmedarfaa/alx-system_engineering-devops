#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infini_loop - loop to make the program hang
 * Return: always 0
 */
int infini_loop(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}


/**
 * main - initiating 5 zombie processes
 * Return: 0
 */
int main(void)
{
	int i;
	pid_t zombie;

	for (i = 0; i < 5; i++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
	}

	infini_loop();
	return (0);
}
