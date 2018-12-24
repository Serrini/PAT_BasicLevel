#include <stdio.h>
int main(int argc, char const *argv[])
{
	int N;
	scanf("%d",&N);
	int s=0,p=0,f=0;
	int ac=0,aj=0,ab=0,bc=0,bj=0,bb=0;
	char a[2],b[2];//数组存放CJB
	while(N--)
	{
		scanf("%s %s",a,b);
		//a胜
		if ( (a[0]=='C' && b[0]=='J') || (a[0]=='J' && b[0]=='B') || (a[0]=='B' && b[0]=='C') )
		{
			s++;
			if(a[0]=='C')	++ac;
			if(a[0]=='J')	++aj;
			if(a[0]=='B')	++ab;
		}
		//ab平局
		if ( (a[0]=='C' && b[0]=='C') || (a[0]=='J' && b[0]=='J') || (a[0]=='B' && b[0]=='B') )
		{
			p++;
		}
		//b胜
		if( (b[0]=='C' && a[0]=='J') || (b[0]=='J' && a[0]=='B') || (b[0]=='B' && a[0]=='C') )
		{
			f++;
			if(b[0]=='C')	++bc;
			if(b[0]=='J')	++bj;
			if(b[0]=='B')	++bb;
		}
	}

	printf("%d %d %d\n",s,p,f);
	printf("%d %d %d\n",f,p,s);
	printf("%c %c",((ac>ab&&ac>=aj)?'C':(ab>=aj?'B':'J')),(bc>bb&&bc>=bj)?'C':(bb>=bj?'B':'J'));//三目运算
	return 0;
}