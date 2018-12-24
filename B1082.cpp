#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxn=10010;
/*
3
0001 5 7
1020 -1 3
0233 0 -1
*/
struct pp{
	int id;
	double x;
	double y;
	double d;
}p[maxn];

int main(){
	int N;
	scanf("%d",&N);
	double Max=-1;
	double Min=200;
	int best,last;
	for(int i=0;i<N;i++){
		scanf("%04d %lf %lf",&p[i].id,&p[i].x,&p[i].y);
		p[i].d=sqrt(p[i].x*p[i].x+p[i].y*p[i].y);
		if(p[i].d>Max){
			Max=p[i].d;
			best=p[i].id;
		}
		if(p[i].d<Min){
			Min=p[i].d;
			last=p[i].id;
		}
	}
	
	printf("%04d %04d",last,best);
	return 0;
}
