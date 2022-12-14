//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
int fun() {
    return 4,5;   //return只能返回一个值
}

int main() {
    int a = fun();
    printf("%d\n",a);

    int b[2] = {fun()};
    printf("%d,%d\n",b[0],b[1]);
}