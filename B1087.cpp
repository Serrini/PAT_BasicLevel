#include <iostream>
using namespace std;
const int maxn=100010;

bool hashTable[maxn]={0};

int main(){
	int N;
	int result;
	int count=0;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		result=i/2+i/3+i/5;
		hashTable[result]=1;
	}
	for(int i=0;i<maxn;i++){
		if(hashTable[i]){
			count++;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
