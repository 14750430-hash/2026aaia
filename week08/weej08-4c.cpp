//week08-4c.cpp SOIT107_BASE_019
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int mm = a;
	if (b<mm) mm = b;
	if (c<mm) mm = c;
	printf("%d\n", mm);
}
