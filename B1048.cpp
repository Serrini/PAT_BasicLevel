#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//1234567 368782971
int main(){
	string a,b;
	cin>>a>>b;
	int l1=a.length();
	int l2=b.length();
	int Max=max(l1,l2);
	int Min=min(l1,l2);
	string s="";
	
	if(l1<l2){
		for(int i=0;i<l2-l1;i++){
			a='0'+a;
		}
	}else{
		for(int i=0;i<l1-l2;i++){
			b='0'+b;
		}
	}
	
	string t="0123456789JQK";
	for(int i=Max-1;i>=0;i--){
		int loc2=Max-i;
		if(loc2%2==1){
			s=t[((a[i]-'0')+(b[i]-'0'))%13]+s;
		}
		if(loc2%2==0){
			s=t[((b[i]-'0')-(a[i]-'0')+10)%10]+s;
		}
	}
	cout<<s;
	
	return 0;
}
