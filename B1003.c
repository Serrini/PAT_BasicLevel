#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int num=0;
	scanf("%d",&num);
	for (int i = 0; i < num; i++)
	{
		char str[101];
		scanf("%s",str);
		int cnt_P=0,cnt_T=0,cnt_A=0,pos_P=0,pos_T=0,isRight=1;
		for (int i = 0; i < strlen(str); i++)
		{
			
			if (str[i]=='P')
			{
				pos_P=i;
				//cnt_P++;
			}
			else if (str[i]=='A')
			{
				cnt_A++;
			}
			else if (str[i]=='T')
			{
				pos_T=i;
				//cnt_T++;
			}
			else
			{
				isRight=0;
				break;
			}
		}
		if (isRight)
		{
			int Left_A=0,Center_A=0,Right_A=0;
			Left_A = pos_P;
			Center_A = pos_T - pos_P - 1;
			Right_A = strlen(str) - pos_T - 1;
			if ( Center_A>0 && Left_A*Center_A == Right_A )
			{
				printf("YES\n");
				continue;
			}
		}
		printf("NO\n");
	}

	return 0;
}