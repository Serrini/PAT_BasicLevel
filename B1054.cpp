#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
	int N;
	int cnt=0;
	char a[50],b[50];
	double temp;
	double sum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",a);
		sscanf(a,"%lf",&temp);
		sprintf(b,"%.2lf",temp);
		int flag=0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]!=b[j]){
				flag=1;
			}
		}
		if(flag==1 || temp<-1000 || temp>1000){
				printf("ERROR: %s is not a legal number\n",a);
				continue;
			}else{
				sum+=temp;
				cnt++;
			}
	}
	
	if(cnt==1){
			printf("The average of 1 number is %.2lf",sum);
		}else if(cnt>1){
			printf("The average of %d numbers is %.2lf",cnt,sum/cnt);
		}else{
			printf("The average of 0 numbers is Undefined");
		}
	
	return 0;
}
