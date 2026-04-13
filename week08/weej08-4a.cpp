//week08-4a.cpp SOIT106_BASE_009
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int MM = a, mm = a;
	if (b>MM) MM = b;
	if (c>MM) MM = c;
	if (b<mm) mm = b;
	if (c<mm) mm = c;
	printf("%d\n", MM - mm);
}
