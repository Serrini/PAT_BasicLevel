#include <stdio.h>
int main(int argc, char const *argv[])
{
	int K=0;
	int n=0;
	scanf("%d",&K);
	int tabel[101]={0};

	for (int i = 0; i < K; i++)
	{
		scanf("%d",&n);
		tabel[n]=1;
	}

	for (int i = 0; i <= 100; i++)
	{
		if (tabel[i])
		{
			for (n=i; n>1; )
			{
				if (n%2)	n=(3*n+1)/2;
				else 	n/=2;
				if (n<=100 && tabel[n])
				{
					tabel[n]=0;
					if(n<i) break;		/* did this before, no need going on */
				}
				
			}

		}
	}
	int count=0;
	for (int i = 100; i >= 1; i--)
	{
		
		if ( tabel[i] )
		{
			++count;
			if (count==1)
			{
				printf("%d",i);
			}else{
				printf(" %d",i);
			}
		
		}
		
	}
	
	return 0;
}
