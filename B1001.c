#include <stdio.h>

int main(int argc, char const *argv[])
{	

	int i,count=0;
	scanf("%d",&i);

	while( i!=1 ){
		if ( i%2==0 )
		{
			i/=2;
			count+=1;

		}else{
			i=(3*i+1)/2;
			count+=1;
		}
	}

	printf("%d\n", count);

	return 0;
}