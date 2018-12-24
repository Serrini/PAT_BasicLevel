#include <stdio.h>
int main(int argc, char const *argv[])
{
	int C1,C2;
	scanf("%d %d",&C1,&C2);
	int hh,mm,ss,cc;
	int second=(C2-C1+50)/100;//不足一秒的按四舍五入到秒

	hh=second/3600;1
	cc=second%3600;
	mm=cc/60;
	ss=cc%60;

	printf("%02d:%02d:%02d",hh,mm,ss);
	return 0;
}