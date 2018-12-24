#include <stdio.h>

int main(int argc, char const *argv[])
{
	long g1,s1,k1,g2,s2,k2;
	scanf("%ld.%ld.%ld %ld.%ld.%ld",&g1,&s1,&k1,&g2,&s2,&k2);
	long P,A,result;
	P=g1*17*29+s1*29+k1;
	A=g2*17*29+s2*29+k2;
	
	long reg,res,rek;

	result=A-P;
	if (result<0)	result *= -1;

	if (result>16*29+28)
	{
		reg=result/(17*29);
		res=(result-(reg*17*29))/29;
		rek=result-reg*17*29-res*29;
	}else if (result>28)
	{
		reg=0;
		res=result/29;
		rek=result-res*29;
	}else{
		reg=0;
		res=0;
		rek=result;
	}

	if (A<P)
	{
		printf("-");
	}
	printf("%ld.%ld.%ld",reg,res,rek);

	return 0;
}