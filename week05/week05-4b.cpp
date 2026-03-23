//week05-4b.cpp SOIT107_Base_002
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ans = 100;
	if (N>1500) {
		ans += (N-1500)/ 250 * 5;
		if ((N-1500)%250 > 0) ans+=5;
	}
	printf("%d", ans);
}
