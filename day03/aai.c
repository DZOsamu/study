//
// Created by LEGION on 2022/11/15.
//
//拆分整数
#include <stdio.h>

int main() {
    int a = 1234;
    a = 1234 %10;
    printf("%d\n",a);   //个位

    a = 1234 /10 %10;
    printf("%d\n",a);   //十位

    a = 1234 /100 %10;
    printf("%d\n",a);   //百位

    a = 1234 /1000 % 10;
    printf("%d\n",a);   //千位
}