#include <cstdio>
#include <iostream>
#include <string>
#include <map>
using namespace std;

string unitstr[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};//???? 
string tenstr[13]={"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};// ¨º??? 
string numtostr[170];
map<string,int>strtonum;

void init()
{
	
	for(int i=0;i<13;i++){
		numtostr[i]=unitstr[i];
		strtonum[numtostr[i]]=i;
		numtostr[i*13]=tenstr[i];
		strtonum[numtostr[i*13]]=i*13;
	}
	for(int i=1;i<13;i++){
		for(int j=1;j<13;j++){
			string str=tenstr[i]+" "+unitstr[j];
			numtostr[i*13+j]=str;
			strtonum[str]=i*13+j;
		}
			
	}
}

int main()
{
	init();
	int T;
	scanf("%d%*c",&T);
	while(T--){
		string str;
		getline(cin,str);
		if(str[0]>='0' && str[0]<='9'){
			int num=0;
			for(int i=0;i<str.length();i++){
				num=num*10+(str[i]-'0');
			}
			cout << numtostr[num] << endl;
		}else{
			cout << strtonum[str] << endl;
		}
	}
	return 0;
}


