#include <cstdio>
const int maxn=1010;

struct student{
	long long id;
	int examseat;
}testseat[maxn];

int main(){
	long long id;
	int seat,examseat;
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%lld %d %d",&id,&seat,&examseat);
		testseat[seat].id=id;
		testseat[seat].examseat=examseat;
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&seat);
		printf("%lld %d\n",testseat[seat].id,testseat[seat].examseat);
	}
	return 0;
}
