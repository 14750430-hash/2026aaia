//week16-6b.cpp SOIT108_Advance_011
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int hh = N/60/60;
	int mm = N/60%60;
	int nn = N%60;
	printf("%02d:%02d:%02d", hh, mm, nn);
}
