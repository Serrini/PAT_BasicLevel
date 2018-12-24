#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A,B,D;
	int sum=0;
	scanf("%d %d %d",&A,&B,&D);
	sum=A+B;
	int n=0;
	int a[1000]={0};
	while(sum)
	{
		a[n]=sum%D;
		sum/=D;
		++n;
	}

	for (int i = n-1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
	if (n==0)
	{
		printf("0");
	}
	return 0;
}