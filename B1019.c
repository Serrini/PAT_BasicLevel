#include <stdio.h>

//选择排序法
//段错误
//原因是选择排序语法错误
//AC
int max(int n);
int min(int n);
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int num=max(n)-min(n);
	do{
		num=max(n)-min(n);
		printf("%04d - %04d = %04d\n",max(n),min(n),num);
		n=num;
	}while(n!=6174&&n!=0);
	return 0;
}

int max(int n)
{
	int a[4]={0};
	for (int i = 0; i < 4; i++)
	{
		a[i]=n%10;
		n/=10;
	}

	int result=0;
	int temp=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i+1; j < 4; j++)
		{
			if (a[i]<=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	result=a[0]*1000+a[1]*100+a[2]*10+a[3];
	return result;
	
}


int min(int n)
{

	int a[4]={0};
	for (int i = 0; i < 4; i++)
	{
		a[i]=n%10;
		n/=10;
	}

	int result=0;
	int temp=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i+1; j < 4; j++)
		{
			if (a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	result=a[0]*1000+a[1]*100+a[2]*10+a[3];
	return result;
}
