// week14-3b.cpp SOIT106_ADVANCE_009
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while (N>0){
		printf("%d", N%10);
		N = N / 10;
	}
	printf("\n");
}
