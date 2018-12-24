#include <stdio.h>
 
int main()
{
	int N;
	scanf("%d", &N);
	double temp;
	double sum = 0.0;
	for(int i = 0; i < N; i++)
	{
		scanf("%lf", &temp);
		sum += (double)(i+1) * (double)(N-i) * temp;
	}
	printf("%.2lf\n", sum);
 
	return 0;
}


