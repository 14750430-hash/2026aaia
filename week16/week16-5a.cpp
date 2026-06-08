//week16-5a.cpp SOIT108_Advance_002
#include <stdio.h>
int isPrime(int N)
{
	for (int i=2; i<N; i++){
	if(N % i == 0)return 0;
	}
	return 1;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int ans = 0;
	for (int i=a; i<=b; i++){
		if (isPrime(i)==1) ans++;
	}
	printf("%d\n", ans);
}
