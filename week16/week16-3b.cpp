//wee16-3b.cpp SOIT108_Advance_028
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	if(a<b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if(a<c) {
		int temp = a;
		a = c;
		c = temp;
	}
	if(b<c) {
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d", a*100 + b*10 + c + 1);
}
