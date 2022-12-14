//
// Created by LEGION on 2022/11/28.
//
#include <stdio.h>
int main() {
    int a = 12;
    int* p1 = &a;
    *p1 = 34;
    printf("%d,%d\n",a,*p1);

    /* 错 误 示 范 */
    double b = 34;
    int* p2 = &b;
    *p2 = 56;
    printf("%lf,%lf\n",b,*p2);

    int c = 56;
    double* p3 = &c;
    *p3 = 78;
    printf("%d,%d\n",c,*p3);
}