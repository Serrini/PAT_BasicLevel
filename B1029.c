#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch1[81]={0};
	gets(ch1);
	char ch2[81]={0};
	gets(ch2);
	//在ch1中删除ch2中出现的字符
	for (int i = 0; i < 81; i++)
	{
		for (int j = 0; j < 81; j++)
		{
			if (ch1[i]==ch2[j])
			{
				ch1[i]=0;
				ch2[j]=0;
			}
		}
	}

	for (int i = 0; i < 81; i++)
	{
		//大写字母转换成小写字母
		if (ch1[i]>='a' && ch1[i]<='z')
		{
			ch1[i]=ch1[i]-32;
		}
		
	}

	for (int i = 0; i < 81; i++)
	{
		//去除重复字母
		for (int j = i+1; j < 81; j++)
		{
			if (ch1[j]==ch1[i])
			{
				ch1[j]=0;
			}
		}

		if (ch1[i]!=0)
		{
			printf("%c",ch1[i]);
		}
	}
	return 0;
}