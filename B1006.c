#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n=0;
	scanf("%d",&n);
	if ( n/10==0 )
	{
		for (int i = 1; i < n+1; i++)
		{
			printf("%d",i);
		}
	}

	int B=0, S=0, N=0;
	if ( n>9 && n<100 )
	{
		N = n % 10;
		S = (n-N)/10;
		for (int i = 0; i < S; i++)
		{
			printf("S");
		}
		for (int i = 1; i < N+1; i++)
		{
			printf("%d",i);
		}
	}

	if ( n>99 && n<1000 )
	{
		N = n % 10;
		S = n/10%10;
		B = n/100;

		for (int i = 0; i < B; i++)
		{
			printf("B");
		}
		for (int i = 0; i < S; i++)
		{
			printf("S");
		}
		for (int i = 1; i < N+1; i++)
		{
			printf("%d",i);
		}
	}

	return 0;
}