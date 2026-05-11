//week12-4.cpp SOIT106_ADVANCE_003
#include <stdio.h>
int main()
{
	int N = 0;
	int a[10];
	for (int i=0; i<10; i++){
		scanf("%d", &a[i]);
		if (a[i]==0) break;
		N++;
	}
	for (int i=N-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
}
