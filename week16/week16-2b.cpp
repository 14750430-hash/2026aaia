//week16-2b.cpp SOIT106_ADVANCE_011
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int d1 = N/1000;
	int d2 = N/100%10;
	int d3 = N/10%10;
	int d4 = N%10;
	printf("%d\n", d1*8+d2*4+d3*2+d4);
}
