#include <stdio.h>
//求最大公约数
long fungcd(long fm1,long fm2)
{
	long r;
	while((r=fm1%fm2))
	{
		fm1=fm2;
		fm2=r;
	}
	return fm2;
}

void printfrac(long m, long n)
{
	if(n==0) {
		printf("Inf");
		return;
	}
	int inegative=1;
	if (m<0)
	{
		m=-m;
		inegative *= -1;
	}
	if (n<0)
	{
		n=-n;
		inegative *= -1;
	}

	long gcd=fungcd(m,n);
	m /= gcd;
	n /= gcd;

	//输出
	if(inegative==-1) printf("(-");
	if (m/n && m%n)
	{
		printf("%ld %ld/%ld",m/n,m%n,n);
	}
	else if(m%n)
	{
		printf("%ld/%ld",m,n);
	}
	else{	
		printf("%ld",m/n);
	}
	if(inegative==-1) printf(")");
}

int main(int argc, char const *argv[])
{
	long fz1,fz2,fm1,fm2;
	scanf("%ld/%ld %ld/%ld",&fz1,&fm1,&fz2,&fm2);

	char a[4]={'+','-','*','/'};
	for (int i = 0; i < 4; i++)
	{
		printfrac(fz1, fm1);	printf(" %c ", a[i]);
        printfrac(fz2, fm2);	printf(" = ");
		switch(a[i])
		{
			case '+': printfrac(fz1*fm2+fm1*fz2, fm1*fm2); break;
			case '-': printfrac(fz1*fm2-fm1*fz2, fm1*fm2); break;
			case '*': printfrac(fz1*fz2, fm1*fm2); break;
			case '/': printfrac(fz1*fm2, fm1*fz2); break;
		}
		printf("\n");
	}
	return 0;
}