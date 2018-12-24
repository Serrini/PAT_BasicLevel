#include <stdio.h>
#include <math.h>
//AC
int main(){
	int N;
	double NN;
	int M;
	char c;
	scanf("%d %c",&N,&c);
	NN=N*0.5;
	M=round(NN);
	int i,j;
//	printf("%d %d",N,M);
	for(i=0;i<N;i++){
		printf("%c",c);
	}
	printf("\n");
	for(i=0;i<M-2;i++){
		printf("%c",c);
		for(j=0;j<N-2;j++){
			printf(" ");
		}
		printf("%c\n",c);
	}
	for(i=0;i<N;i++){
		printf("%c",c);
	}
	
	return 0;
}
