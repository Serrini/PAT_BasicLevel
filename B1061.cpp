#include <cstdio>
using namespace std;
//score=0;
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	
	int k[N+2][M]={0};
	for(int i=0;i<N+2;i++){
		for(int j=0;j<M;j++){
			scanf("%d",&k[i][j]);
		}
	}
	
	for(int i=2;i<N+2;i++){
		int score=0;
		for(int j=0;j<M;j++){
			if(k[i][j]==k[1][j]){
				score+=k[0][j];
			}
		}
		
		printf("%d\n",score);
	}
	
	return 0;
}
