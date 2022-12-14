//
// Created by LEGION on 2022/11/28.
//
#include_next <stdio.h>
int main() {
    int a[5] = {1,2,3,4,5};

    int* p = a;
    printf("%p\t",&a);

    p = &a;
    printf("%p\t",p);

    p = &a[0];
    printf("%p\n",p);

    return 0;
}