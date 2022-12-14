//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
int fun(void) {
    printf("无返回值 有参数 函数\n");
    return 4;   //有返回值也可以不用理会，直接调用函数
}

int main() {
    fun();   //只要出现fun()，就会调用一次函数
    int a = fun();   //fun()相当于一个常数
    printf("%d\n%d\n",a,fun());   //执行完这一次fun()之后才将值返回

    fun();
    int b = fun() + 12;   //函数的值由return决定，运算时注意()，不加是用函数地址进行运算
    printf("%d\n",b);

    return 0;
}