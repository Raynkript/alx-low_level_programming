#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Prints random number to variable
 *
 * Return: Always (Successful)
 */
int main(void)
{
	int n;
	char last[] = &quot;Last digit of &quot;;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(&quot%s %d is %d and is &quot;, last, n, n % 10);
	if (n % 10 &gt; 5)
	{
		printf(&quot;greater than 5\n&quot;);
	}
	else if (n % 10 == 0)
	{
		printf(&quot;0\n&quot;);
	}
	else
	{
		printf(&quot;less than 6 and not 0\n&quot;);
	}
	return (0);
}
