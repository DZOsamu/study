//
// Created by LEGION on 2022/11/14.
//
#include <stdio.h>

int main() {
    int a = 1, b;
    a = b = 5;   //从右往左赋值
    printf("%d\n",a);

    float c = 12.3456;   //左边是目标类型，该语句中数字是double型，电脑自动转成和左侧一样的类型
    printf("%f\n",c);

    int d, e, f;
    d = 4;
    e = a *( d + b )- d / 2;   //有括号先算括号，先乘除后加减，从左向右
    f = a * d + b - d / 2;   //用/注意分母不为零，用%必须是整数，不能是浮点数
    printf("%d\t%d\n",e,f);
}