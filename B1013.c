#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{	
	int m,n;
	int i,j,num1=1,num2=0;//num1为已知的素数，num2为打印的素数
	scanf("%d %d",&m,&n);
	int su=1;

	if (m==1||n==1)
	{
		printf("2");
		num2++;
	}
	for (i = 3; num1<=n && num2<=(n-m+1) ; i++)
	{
		for (j = 2; j<=sqrt(i)&& su ; j++)
		{
			if (i%j==0)
			{
				su=0;
				break;	
			}
		}
		
		if(su)
		{
			num1++;
			if (num1>=m && num1<n)
			{	
				printf("%d",i);
				num2++;
				if (num2%10==0 && num<n)
					printf("\n");
				else
					printf(" ");
			}
			if (num1==n)
				{
					printf("%d",i);
					num2++;
				}
			}
		su=1;
	}
	return 0;
}


