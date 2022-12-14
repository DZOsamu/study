//
// Created by LEGION on 2022/11/24.
//
//斐波那契数列求和（后一项=前两项之和）
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d",&n);
    int a[n];
    a[0] = 1;
    a[1] = 1;
    for(int i = 2;i < n;i++) {
        a[i] = a[i-1] + a[i-2];
    }
    for (int i = 0; i < n ; i++) {
        sum = sum + a[i];
    }
    printf("%d",sum);
    return 0;
}