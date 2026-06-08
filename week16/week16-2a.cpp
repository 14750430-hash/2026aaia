//week16-2a.cpp SOIT106_ADVANCE_010
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		int now;
		scanf("%d", &now);
		printf("%d,", now*now);
	}
	printf("\n");
}
