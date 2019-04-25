#include<stdio.h>

int fib(int n);

int main(void)
{
	int n;
	int result;
	scanf("%d",&n);
	result = fib(n);
	printf("The value of fib in index %d is %d",n,result);
	return 0;
}

int fib(int n)
{
	if(1 == n || 2 == n)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
