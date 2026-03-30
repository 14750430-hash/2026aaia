//week6-5b.cpp SOIT107_Base_008
#include <stdio.h>
int main()
{
	printf("Enter the number of values to be processed: ");
	int N;
	scanf("%d", &N);
	int ans=1, now;
	for(int i=0; i<N; i++) {
		printf("Enter a value: ");
    	scanf("%d", &now);
    	ans = ans * now;
    }
    printf("Product of the %d values is %d", N, ans);
    //printf("%d",ans);
}
