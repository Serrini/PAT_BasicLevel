#include <stdio.h>
int main(int argc, char const *argv[])
{
	int str[7]={0};//PATest
	char ch;
	while((ch=getchar())!='\n')
	{
		if (ch=='P')
		{
			str[0]++;
		}
		if (ch=='A')
		{
			str[1]++;
		}
		if (ch=='T')
		{
			str[2]++;
		}
		if (ch=='e')
		{
			str[3]++;
		}
		if (ch=='s')
		{
			str[4]++;
		}
		if (ch=='t')
		{
			str[5]++;
		}
	}

	//printf("%d %d %d %d %d %d\n",str[0],str[1],str[2],str[3],str[4],str[5]);
/*
	int max=str[0];
	for (int i = 0; i < 6; i++)
	{
		if (str[i]>max)
		{
			max=str[i];
		}
	}
*/
	while(str[0]||str[1]||str[2]||str[3]||str[4]||str[5])
	{
		if (str[0])
		{
			printf("P");
			str[0]--;
		}
		if (str[1])
		{
			printf("A");
			str[1]--;
		}
		if (str[2])
		{
			printf("T");
			str[2]--;
		}
		if (str[3])
		{
			printf("e");
			str[3]--;
		}
		if (str[4])
		{
			printf("s");
			str[4]--;
		}
		if (str[5])
		{
			printf("t");
			str[5]--;
		}
		
	}
	return 0;
}