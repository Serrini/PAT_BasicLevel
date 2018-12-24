#include <stdio.h>
#include <stdlib.h>
#define MAXN 100000

typedef struct
{
	int id;
	int df;
	int cf;
}student;

int cmp(const void *a,const void *b);

int main(int argc, char const *argv[])
{
	int N,L,H;
	int id,df,cf;
	scanf("%d %d %d",&N,&L,&H);
	int cnt[4]={0};
	student a[4][MAXN];
	while(N--)
	{
		scanf("%d %d %d",&id,&df,&cf);
		if (df>=L && cf>=L)
		{
			student stu={id,df,cf};
			if (df>=H && cf>=H)	a[0][cnt[0]++]=stu;
			else if (df>=H && cf<H)	a[1][cnt[1]++]=stu;
			else if (df<H && cf<H && df>=cf)	a[2][cnt[2]++]=stu;
			else	a[3][cnt[3]++]=stu;
		}
	}

	printf("%d\n",cnt[0]+cnt[1]+cnt[2]+cnt[3]);

	for (int i = 0; i < 4; i++)
	{
		qsort(a[i],cnt[i],sizeof(a[0][0]),cmp);
		for (int j = 0; j < cnt[i]; j++)
		{
			printf("%d %d %d\n", a[i][j].id,a[i][j].df,a[i][j].cf);
		}
	}
	return 0;
}

int cmp(const void *a,const void *b)
{
	student s1=*(student*)a;
	student s2=*(student*)b;
	if ((s1.df+s1.cf) > (s2.df+s2.cf))	return -1;
	if ((s1.df+s1.cf) < (s2.df+s2.cf))	return 1;
	if (s1.df > s2.df)	return -1;
	if (s1.df < s2.df)	return 1;
	if (s1.id > s2.id)	return 1;
	else return -1;
}