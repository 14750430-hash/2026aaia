//week12-5c.cpp SOIT106_ADVANCE_007
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int n1 = N/1000;
	int n2 = N/100%10;
	int n3 = N/10 %10;
	int n4 = N%10;
	if (n1==n4 && n2==n3) printf("YES\n");
	else printf("NO\n");
}
