#include <cstdio>
#include <math.h>
#include <iostream>
using namespace std;
const int maxn=10010;

int gcd(int a, int b){
	int c;
	while (a != 0)
	{
		c = b%a;
		b = a;
		a = c;
	}
	return b;
}


int main(){
	double N1,M1,N2,M2,K;
	scanf("%lf/%lf %lf/%lf %lf",&N1,&M1,&N2,&M2,&K);
	int i;
	double kk1,kk2;
	int k1,k2;
	kk1=N1*(K/M1);
	kk2=N2*(K/M2);
	/*
	if(kk1!=N1){
		k1=ceil(kk1);
	}else{
		k1=kk1+1;
	}
	if(kk2!=N2){
		k2=floor(kk2);
	}else{
		k2=kk2-1;
	}
	*/
	
	k1=ceil(kk1);
	k2=floor(kk2);
	
	printf("%d %d\n",k1,k2);
	int count=0;
	int KK=K;
	int rp;
	int array[maxn]={0};
	for(i=k1; i<=k2 && i!=0;i++){
		if(gcd(i,KK)==1){
			array[count++]=i;	
		//	printf("%d\n",i); 
		}
	}
	if(count>=2)
	{
		for(int i=0;i<count-1;i++){
			printf("%d/%d ",array[i],KK);
		}
		printf("%d/%d",array[count-1],KK);
			
	}else{
		printf("%d/%d",array[0],KK);
	}

	
	return 0;
}
