#include <stdio.h>
#include <stdlib.h>

typedef struct mooncake
	{
		double storage;
		double sumPrice;
		double perPrice;
	}mk;

int cmp(const void *a,const void *b);

int main(int argc, char const *argv[])
{
	int N=0,D=0;
	scanf("%d %d",&N,&D);
	mk list[1001];

	for (int i = 0; i < N; i++)
	{
		scanf("%lf",&list[i].storage);
	}
	
	for (int i = 0; i < N; i++)
	{
		scanf("%lf",&list[i].sumPrice);
	}

	for (int i = 0; i < N; i++)
	{
		list[i].perPrice=list[i].sumPrice/list[i].storage;
	}

	qsort(list,N,sizeof(list[0]),cmp);

	double ret=0.0;
	for (int i = 0; i < N; i++)
	{
		if (D<=list[i].storage)	//需求小于存货
		{
			ret+=D*list[i].perPrice;
			break;
		}
		else
		{
			ret+=list[i].sumPrice;
			D-=list[i].storage;
		}
	}

	printf("%0.2f",ret);
	return 0;
}

//按单价降序排列
int cmp(const void *a,const void *b)
{
	mk m1=*(mk*)a;
	mk m2=*(mk*)b;
	if (m1.perPrice > m2.perPrice)	return -1;
	else return 1;
}