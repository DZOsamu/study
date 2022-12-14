//
// Created by LEGION on 2022/11/27.
//
#include <stdio.h>
int main() {
    int a = 12;
    int* p = &a;   //指针变量的初始化

    printf("%p\n%p\n%p\n",&p,p,&a);
    printf("%d,%d\n",a,*p);

    *p = 145;
    printf("%d,%d\n", a, *p);

    printf("%p\n%p\n%p\n", p, &*p, &a);
}