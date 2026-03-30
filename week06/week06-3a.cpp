//week06-3a.cpp SOIT106_Base_002
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int d50 = N / 50;
	int d5 = (N%50) / 5;
	int d1 = (N%5) / 1;
	printf("%d=50*%d+5*%d+1*%d\n", N, d50, d5, d1);
}
