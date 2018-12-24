#include <cstdio>
#include <cstring>
int main(){
	char str1[81]={0};
	char str2[81]={0};
	gets(str1);
	gets(str2);
	
	bool hashTable[128]={false};
	int len1=strlen(str1);
	int len2=strlen(str2);
	
	for(int i=0;i<len1;i++){
		char c1,c2;
		c1=str1[i];
		int j;
		for(j=0;j<len2;j++){
			c2=str2[j];
			if(c1>'a' && c1<'z')	c1=c1-32;
			sif(c2>'a' && c2<'z')	c2=c2-32;
			if(c1==c2)	break;
		}
		if(j==len2 && hashTable[c1]==false){
			printf("%c",c1);
			hashTable[c1]=true;
		}
		
	}
	
	return 0;
}
