/// weej10-3.cpp 泡泡排序法 Part 1
/// (1) 陣列宣告 (2) for迴圈印陣列 (3) 減1的迴圈 (4) for迴圈印陣列
#include <stdio.h>
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9}; /// 陣列宣告

    for (int i=0; i<10; i++){ ///逐一印出
        printf("%d", a[i] ); /// 空格隔開
    }
    printf("\n"); ///跳行

    for (int i=0; i<10-1; i++){ /// 小心,有個10-1的 減1的迴圈
        if (a[i] < a[i+1]) { /// 如果大小不對
            int temp = a[i]; /// 就交換
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0; i<10; i++){ /// 逐一印出 for迴圈印陣列
        printf("%d", a[i]); /// 空格隔開
    }
    printf("\n"); ///跳行
}
