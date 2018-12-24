#include <iostream>
using namespace std;
//100000-->1

int main(){
	int A,B,result;
	int count=0;
	int b[100];
	int flag=0;
	scanf("%d %d",&A,&B);
	result=A*B;
	while(result){
		b[count++]=result%10;
		result/=10;
	}
	for(int i=0;i<count;i++){
		if(b[i]){
			flag=1;
		}
		if(flag){
			printf("%d",b[i]);
		}
	}
	
	return 0;
}
