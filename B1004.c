#include <stdio.h>
struct Student
{
	char name[11];
	char id[11];
	int score;
}temp,max,min;

int main(int argc, char const *argv[])
{
	int n=0;
	max.score=-1;
	min.score=101;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %s %d",temp.name,temp.id,&temp.score);
		if( temp.score>max.score )	max=temp;
		if( temp.score<min.score )	min=temp;
	}
	printf("%s %s\n%s %s",max.name,max.id,min.name,min.id);
	return 0;
}