#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	int a[1001]={};
	int n=0;
	while ( (ch=getchar()) != ' ' )
	{
		a[n]=ch-'0';
		++n;
	}

	int B;
	scanf("%d",&B);
	int carry=0;//保存一位余数
	
	for ( int i = 0; i < n; i++ )
	{
		if ( i!=0 || (a[i]/B)!=0)
		{
			printf("%d",(carry*10+a[i])/B);
		}
		carry=(carry*10+a[i])%B;
	}

	if ( n==1 && a[0]<B )
	{
		printf("0");
	}

	printf(" %d",carry);

	return 0;
}