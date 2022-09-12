#!/bin/bash
#include &lt; stdio.h&gt;
/**
 * main - lowercase alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;
	for (c = &#39;a&39;; c &lt;= &#39;z&#39;; c++)
		putchar(c);
	putchar(&#39;\n&#39;);
	return (0);
}
