/// week14-4b.cpp 二合一 找最大公因數(輾轉相除法)
#include <stdio.h>
int gcd(int a, int b)
{
    printf("現在 a:%d b:%d\n", a, b);
    if (a==0) return b;
    if (b==0) return a;
    return gcd( b, a%b);
}
int main()
{
    printf("請輸入2個整數(ex. 57 76): ");
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = gcd(a, b); ///使用"函式呼叫函式"
    printf("最大公因數式:%d\n", ans);
    printf("%d / %d 約分變 %d / %d \n", a, b, a/ans, b/ans);
}
