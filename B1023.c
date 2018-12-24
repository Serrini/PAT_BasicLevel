#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[10]={0};
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	int min=10;
	for (int i = 1; i < 10; i++)
	{
		if (a[i] && i<min)
		{
			min=i;
			a[i]--;
			break;
		}
	}

	printf("%d",min);

	for (int i = 0; i < 10; i++)
	{
		while(a[i])
		{
			printf("%d",i);
			a[i]--;
		}
	}

	return 0;
}