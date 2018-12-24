#include <stdio.h>
int main(int argc, char const *argv[])
{
	int N=0;
	scanf("%d",&N);
	int prime[N+1];
	for (int i = 0; i < N+1; i++)
	{
		prime[i]=1;
	}

;
	int x=2;

	while( x<=N+1 )
	{
		if ( prime[x] )
		{
			for (int i = 2; i*x <= N+1; i++ )
			{
				prime[i*x]=0;
			}
			
		}
		x++;
	}
	
	int count=0;
	for ( int i = 2; i < N; i++ )
	{
		if ( prime[i] && prime[i+2] )
		{
			++count;
			//printf("%d\n",i);
		}
	}
	printf("%d", count);

	return 0;
}