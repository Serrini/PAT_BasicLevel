#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
//AC
bool hashTable[256];
int main(){
  	memset(hashTable,true,sizeof(hashTable));
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	for(int i=0;i<str1.length();i++){
		if(str1[i]>='A' && str1[i]<='Z'){
			str1[i]+=32;
		}
		hashTable[str1[i]]=false;
	} 
	for(int i=0;i<str2.length();i++)
	{
		if(str2[i]>='A' && str2[i]<='Z'){
			int low=str2[i]+32;
			if(hashTable[low] && hashTable['+']){
				printf("%c",str2[i]);
			}
		}else if(hashTable[str2[i]]){
			printf("%c",str2[i]);
		}
	}
	printf("\n");
	return 0;
}
