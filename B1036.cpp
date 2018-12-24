#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double N;
	int M;
	char c;
	scanf("%f %c",&N,&c);
	M=round(N);
	
	printf("%f %d",N,M);
	for(int i=0;i<N;i++){
		printf("%c",c);
	}
	for(int i=0;i<M-2;i++){
		printf("%c",c);
		for(int j=0;j<N-2;j++){
			printf(" ");
		}
		printf("%c",c);
	}
	
	return 0;
}
