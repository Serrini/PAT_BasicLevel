#include <string>
#include <iostream>
using namespace std;

//AC
int main(){
	string str;
	getline(cin,str);
	int len=str.length();
	int hashTable[27]={0};
	for(int i=0;i<len;i++){
		if(str[i]>='a' && str[i]<='z'){
			hashTable[str[i]-'a']++;
		}else if(str[i]>='A' && str[i]<='Z'){
			hashTable[str[i]-'A']++;
		}
	}
	int max=0;
	for(int i=0;i<26;i++){
		if(hashTable[i]>hashTable[max]){
			max=i;
		}
	}
	
	printf("%c %d\n",'a'+max,hashTable[max]);
	
	return 0;
}
