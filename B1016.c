#include <stdio.h>
/*返回新整数的函数*/
int pp( int A, int da ) {
	int digit, pa = 0;
	
	while ( A ) {
		digit = A % 10;    //获取余数。
		if ( digit == da )	pa = digit + 10 * pa;    //每新增一位原来的数升10倍。
		A /= 10;    //砍掉个位上的数。
	}
	
	return pa;
}

int main(void) {
	int A, da, B, db, pa, pb;
	
	scanf("%d %d %d %d", &A, &da, &B, &db);
	pa = pp( A, da );
	pb = pp( B, db );
	printf("%d", pa + pb);
	
	return 0;
}
