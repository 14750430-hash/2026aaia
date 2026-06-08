//week16-6c.cpp SOIT108_Advance_010
#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s", s);
	int N = strlen(s);
	for (int i=0; i<N; i++){
		if ((N-i)%3==0 && i!=0) printf(",");
		printf("%c", s[i]);
	}
}
