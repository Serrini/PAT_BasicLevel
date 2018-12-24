#include <iostream>
using namespace std;

/*
5 0.5 10
6 0.3 0.4 0.5 0.2 0.8 0.6
10 0.0 0.1 0.2 0.3 0.0 0.8 0.6 0.7 0.0 0.5
5 0.4 0.3 0.5 0.1 0.7
11 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1 0.1
11 2 2 2 1 1 0.1 1 0.1 0.1 0.1 0.1
*/
int main(){
	int N,D;
	double e;
	double E;
	int K;
	double countA=0,countB=0;
	scanf("%d %lf %d",&N,&e,&D);
	for(int i=0;i<N;i++){
		scanf("%d",&K);
		double count=0;
		for(int j=0;j<K;j++){
			scanf("%lf",&E);
			if(E<e){
				count+=1;
			}
		}
		if(K>D && count/K>0.5){
			countB++;
		}else if(count/K>0.5){
			countA++;
		}

	}
	
	printf("%.1lf%% %.1lf%%",countA/N*100.0,countB/N*100.0);
	
	return 0;
}
