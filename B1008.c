#include <stdio.h>
int main(int argc, char const *argv[])
{
	int N=0,M=0;
	scanf("%d %d",&N,&M);
	int a[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
	}

	int temp=0;
	for (int i = N-M; i < N; i++)
	{
		/*
		temp = a[i];
		a[i] = a[i-(N-M)];
		a[i-(N-M)] = temp;
		*/
		printf("%d",a[i]);
	}


	return 0;
}