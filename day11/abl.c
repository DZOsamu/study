//
// Created by LEGION on 2022/11/28.
//
#include <stdio.h>
int main() {
    int a[5]={1000,2,3,4,5};
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    int* p[5] = {a,&b,&c,&d,&e};

    printf("%p\t",a);
    printf("%p\n",p[0]);

    printf("%d\t",a[0]);
    printf("%d\n",p[0][0]);

    printf("%p\t",&p[0][0]);
    printf("%p\n",&a[0]);

    return 0;
}