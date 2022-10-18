#include <stdio.h>
#include <stdlib.h>

void func(int i)
{
	return ;
}

int main(void)
{
	int i = 5;
	const int j = i;

	func(j);

	return (0);
}
