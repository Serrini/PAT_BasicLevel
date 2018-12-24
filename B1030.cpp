#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn=1000001;

//two pointers
int main(){
	int N,p=0;
	int a[maxn];
	scanf("%d %d",&N,&p);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+N);
	int i,j=0;
	int count=0;
	while(i<N && j<N){
		while(j<N && a[j]<=(long long)a[i]*p){
			count=max(count,j-i+1);
			j++;
		}
		i++;
	}
	printf("%d\n",count);
	return 0;
}

