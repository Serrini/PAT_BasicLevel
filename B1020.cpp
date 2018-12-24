#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=1001;

struct mooncake
	{
		double storage;
		double sumPrice;
		double perPrice;
	}list[maxn];
//单价降序排序	
bool cmp(const mooncake &a,const mooncake &b)
{
	return a.perPrice>b.perPrice;
}

int main(int argc, char const *argv[])
{
	int N=0,D=0;
	scanf("%d %d",&N,&D);

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

	sort(list,list+maxn,cmp);

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

