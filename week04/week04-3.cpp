//week04-3.cpp SOIT106_BASE_010
#include <stdio.h>
int main()
{
	int ans = 0;
	for (int i=0; i<10; i++) {
		int now;
		scanf("%d", &now);
		if (now%3==0) ans++;
	}
	printf("%d\n", ans);
}
