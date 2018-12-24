#include <stdio.h>
//很辣鸡 不要用数组c
int main(int argc, char const *argv[])
{
	int sum[10000]={0};
	int N=0;
	char C;
	scanf("%d %c",&N,&C);

	for (int i = 1; i < 2000; i++)
	{
		sum[i]=sum[i-1]+2*(2*i+1);
	}

	int firstline=0;
	int s=0,left=0;
	int i,j,k;
	for (i = 0; i < 200; i++)
	{
		if (N>=sum[i] && N<sum[i+1])
		{
			firstline=(sum[i]-sum[i-1])/2;
			s=sum[i];
			left=N-sum[i]-1;
			break;
		}
	}

	for (j = firstline; j > 0; j-=2)
	{
		for (k = 0; k < (firstline-j)/2; k++)
		{
			printf(" ");
		}
		for (k = 0; k < j; k++)
		{
			printf("%c",C);
		}
		printf("\n");
	}

	for (j = 3; j <= firstline; j+=2)
	{
		for (k = 0; k < (firstline-j)/2; k++)
		{
			printf(" ");
		}
		for (k = 0; k < j; k++)
		{
			printf("%c",C);
		}
		printf("\n");
	}

	printf("%d",left);

	return 0;
}