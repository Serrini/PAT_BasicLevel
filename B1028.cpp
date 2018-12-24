#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;

int main(){
	int n;
	int num=0;
	int yy,mm,dd;
	ll maxage=20140907,minage=18140905;
	char name[6],minname[6],maxname[6];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d/%d/%d",name,&yy,&mm,&dd);
		ll birth=yy*10000+mm*100+dd;
		if(birth>=18140906 && birth<=20140906){
			num++;
			if(birth<maxage){
				strcpy(maxname,name);
				maxage=birth;
			}
			if(birth>minage){
				strcpy(minname,name);
				minage=birth;
			}
		}
	
	}
	if(num){
		printf("%d %s %s\n",num,maxname,minname);
	}else{
		printf("0\n");
	}
	return 0;
}
