#include <stdio.h>
//不要用结构体数组做，你不会
/*
typedef struct stduent
	{
		int schoolid;
		int stuscore;
	}stu;
*/
int main(int argc, char const *argv[])
{
	int arr[10000]={0};
	int num=0,score=0;
	int max=0;
	int N;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d %d",&num,&score);
		arr[num]+=score;
		if (arr[num]>arr[max])
		{
			max=num;
		}
	}
	printf("%d %d\n",max,arr[max]);
	return 0;
}