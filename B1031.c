#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char id[17]={0};
	char M[11]={1,0,'X',9,8,7,6,5,4,3,2};//记得字符串数组初始化要加单引号
	int sum=0,z=0,N=0;
	char check;
	int allpass=1;

	scanf("%d",&N);
	for (int i = 0; i < N; i++)
		{
			sum=0;//记得sum要归零啊
			scanf("%17s%c",id,&check);
			//printf("%s%c\n",id,check);
			for (int j = 0; j < 17; j++)
			{
				sum+=weight[j]*(id[j]-'0');
			}
			z=sum%11;
			if (M[z]!=check)
			{
				allpass=0;
				printf("%17s%c\n",id,check);
			}
		}

	if (allpass)
	{
		printf("All passed");
	}
	return 0;
}