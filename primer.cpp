#include<stdio.h>

void isPrimer(int n);

int main(void)
{
	int n;
	scanf("%d",&n);

	isPrimer(n);
	return 0;
}

void isPrimer(int n)
{
	int line = 0;
	int a[200000];
	for (int i = 0; i < n+1; i++) 
	{
		a[i] = 1;	
	}
	for (int j = 2; j < n+1; j++)
	{
		if(1 == a[j])
		{
			for (int k = 1; k*j < n+1; k++)
			{
				a[j*k] = 0;
			}
			line++;
			printf("%d    ",j);
			if(0 == line%5)
			{
				printf("\n");
			}
		}
	}
}
 
