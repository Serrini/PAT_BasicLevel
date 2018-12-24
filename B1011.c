#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num,i,j;
	scanf("%d",&num);

	long array[num][3];
	for ( i = 0; i < num; i++ )
	{
		scanf("%ld %ld %ld",&array[i][0],&array[i][1],&array[i][2]);
	}
	for ( i = 0; i < num; i++)
	{
		if (array[i][0]+array[i][1]>array[i][2])
		{
			printf("Case #%d: true\n",i+1);
		}else{
			printf("Case #%d: false\n",i+1);
		}
	}

	return 0;
}