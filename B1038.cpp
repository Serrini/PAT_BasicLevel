#include <cstdio>
int main(){
	int score=0;
	int hashTable[110]={0};
	
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&score);
		hashTable[score]++;
	}
	
	int K;
	scanf("%d",&K);
	for(int i=0;i<K;i++){
		scanf("%d",&score);
		printf("%d",hashTable[score]);
		if(i!=K-1){
			printf(" ");
		}
	}
	return 0;
	}

