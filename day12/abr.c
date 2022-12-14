//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
int fun() {
    int a = 12;   //不是所有路径都有返回值，如a=34
    if(a > 0 && a <= 10) {
        return 1;   //return可以有多个，但只执行代码逻辑顺序中的第一个
    }
    if(a > 10 && a <= 20)
    {
        return 2;
    }
    if(a > 20 && a <= 30)
    {
        return 3;
    }
    return 4;   //没有返回值时，在if结构外层加上return
}

int main() {
    int b = fun();
    printf("%d\n",b);

    return 0;
}