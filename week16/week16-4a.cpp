//wee16-4a.cpp SOIT108_Advance_012
#include <stdio.h>
int main()
{
	int K;
	scanf("%d", &K);
	int total = 0;
	for (int i=1; i<1000; i++){
		total += i;
		if (total > K){
			printf("%d", i);
			break;
		}
	}
}
