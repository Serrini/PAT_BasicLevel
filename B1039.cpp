#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
const int maxn=1010;
int hashTable[maxn]={0};
int hashTable2[maxn]={0};
int main(){
	int sum=0,sum1=0;
	int result=1;//Y or N

	int No_result=0;//if NO
	string str,str1;
	getline(cin,str);
	getline(cin,str1);
	for(int i=0;i<str.length();i++){
		hashTable[str[i]]++;
	}
	
	for(int i=0;i<str1.length();i++){
		if(hashTable[str1[i]]==0){
			result=0;
			No_result++;
		}else{
			hashTable[str1[i]]--;
		}
	}
	
	if(result){
		printf("Yes %d",str.length()-str1.length());
	}else{
		printf("No %d",No_result);
	}
	
	return 0;
}
