//
// Created by LEGION on 2022/11/13.
//
#include <stdio.h>

int main(void) {
    int a = 1113;   //int是integer(整数)的缩写，是关键字，=是赋值运算符，不是等于
    int b = 20;   //定义变量，已初始化
    int c,d;   //声明，未初始化，系统给默认值

    printf("%d\t%d\n",c,d);
    printf("%d\n",a);

    a = 113;   //变量=常量
    printf("%d\n",a);

    a = 13;
    a = -14;   //有符号signed int，signed可以省略
    printf("%d\t%d\n",a,b);   //输出最后一次赋值

    b = a;
    printf("%d\t%d\n",a,b);   //赋值传递
    return 0;
}

//内存大小：4字节，1字节==8个2进制位，一个2进制位只有两个数0或1，4字节就是32个2进制位
//得到类型大小：sizeof()