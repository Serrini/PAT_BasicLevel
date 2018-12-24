#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char n[101];
	int a[5];
	int t=0;
	int i,sum=0;
	char py[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

	gets(n);

	for ( i = 0; i < strlen(n); i++)
	{
		sum+=n[i]-'0';
	}

	while(sum)
	{
		a[t]=sum%10;
		t++;
		sum/=10;
	}

	printf("%s",py[a[t-1]]);

	for ( i = t-2; i >= 0; i--)
	{
		printf(" %s",py[a[i]]);
	}

	return 0;
}