#include <iostream>
#include <cstdio>
#include <string>
/*
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
*/

using namespace std;
const int maxn=100010;

//wrong
struct Node{
	string Address;
	int Data;
	string Next;
}N[maxn];

int main(){
	string head;
	int n,K;
	int temp;
	scanf("%s %d %d",&head,&n,&K);
	for(int i=0;i<n;i++){
		scanf("%s %d %s",&N[i].Address,&N[i].Data,&N[i].Next);
			
	}
		
	for(int i=0;i<n;i++){
		printf("%s %d %s\n",N[i].Address.c_str(),N[i].Data,N[i].Next.c_str());
	}
	
	
	int nn=n;
	while(nn/K){
		for(int i=0;i<K/2;i++){
			temp=N[i].Data;
			N[i].Data=N[K-i-1].Data;
			N[K-i-1].Data=temp;
		}
		nn-=K;
	}
	
	for(int i=0;i<n;i++){
		printf("%s %d %s\n",N[i].Address.c_str(),N[i].Data,N[i].Next.c_str());
	}
	
	
	return 0;
}
