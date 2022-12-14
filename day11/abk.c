//
// Created by LEGION on 2022/11/28.
//
#include <stdio.h>
int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    int* p[5] = {&a,&b,&c,&d,&e};

    for (int i = 0; i < 5; ++i) {
        printf("%p\t",p);
        printf("%p\t",&p[i]);
        printf("%d\n",*p[i]);
    }
}