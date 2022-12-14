//
// Created by LEGION on 2022/11/28.
//
#include <stdio.h>
int main() {
    int a[3] = {1,2,3};

    printf("%p\n",a);
    printf("%p\n",&a);
    printf("%p\n",&a[0]);

    return 0;
}