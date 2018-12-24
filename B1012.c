#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	int array[num-1];
	

	int a1=0,a2=0,a3=0,a5=0;
	int i2=0,sum4=0;
	double a4=0.0;

	int i,count;
	for ( i = 0; i < num; i++)
	{
		scanf(" %d",&count);
		array[i]=count;
	}

	for ( i = 0; i < num; i++)
	{
		//a1
		if (array[i]%5==0 && array[i]%2==0)
		{
			a1+=array[i];
		}

		//a2
		if (array[i]%5==1)
		{
			++i2;
			if (i2%2!=0)
			{
				a2+=array[i];
			}else{
				a2-=array[i];
			}
		}

		//a3
		if (array[i]%5==2)
		{
			++a3;
		}

		//a4
		if (array[i]%5==3)
		{
			++a4;
			sum4+=array[i];


		}

		//a5
		if (array[i]%5==4)
		{

			if (array[i]>=a5)
			{
				a5=array[i];
			}
		}


	}

	if (a1==0){
		printf("N ");
	}else{
		printf("%d ",a1);
	}

	if (a2==0){
		printf("N ");
	}else{
		printf("%d ",a2);
	}

	if (a3==0){
		printf("N ");
	}else{
		printf("%d ",a3);
	}
	if (a4==0.0){
		printf("N ");
	}else{
		printf("%0.1f ",sum4/a4);
	}
	if (a5==0){
		printf("N ");
	}else{
		printf("%d ",a5);
	}

	return 0;
}