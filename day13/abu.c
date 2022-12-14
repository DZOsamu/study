//
// Created by LEGION on 2022/12/6.
//
#include <stdio.h>
#include <malloc.h>

int* fun(void) {
    int* p = (int*)malloc(8);   //动态内存分配
    *p = 4;
    p[1] = 5;

    int a[2] = {4,5};
    return p;
}

int main() {
    int* a = fun();
    printf("%d,%d",a[0],a[1]);

    //free(a);

    return 0;
}