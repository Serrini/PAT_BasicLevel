#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int M,j;
	int flag=0;
	double X,Y;
	double K[3],k;
	scanf("%d %lf %lf",&M,&X,&Y);
	for(int i=10;i<100;i++){
		j=i%10*10+i/10;
		k=fabs(i-j)/X;
		
		if(j==Y*k){
			K[0]=i;
			K[1]=j;
			K[2]=k;
			flag=1;
		}
	}
	
	if(!flag){
		printf("No Solution");
	}else{
		printf("%.0f ",K[0]);
		for(int i=0;i<3;i++){
			if(K[i]>M){
				printf("Cong");
			}else if(K[i]==M){
				printf("Ping");
			}else{
				printf("Gai");
			}
			if(i!=2)	printf(" ");
		}	
	}
	
	return 0;
}
