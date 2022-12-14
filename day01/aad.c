//
// Created by LEGION on 2022/11/13.
//
#include <stdio.h>

int main() {
    unsigned a = 13;
    printf("%u\n",a);   //%u无符号整型

    a = 4294967298;
    printf("%u\n",a);

    short b = 1;  //短整型，即short int（int可省略）
    printf("short:%hd\n", b);   //输出格式符%hd或%d
    printf("short:%hd\n", sizeof(b));   //2字节

    long c = 3;   //长整型，即long int（int可省略）
    printf("long:%d\n", c);   //输出格式符%ld或%d
    printf("long:%d\n", sizeof(c));   //4字节

    long long d = 5;   //超长整型，即long long int（int可省略）
    printf("long long:%d\n", d);   //输出格式符%lld或%d
    printf("long long:%d\n", sizeof(d));   //8字节
}


//有符号signed，无符号unsigned，两者表示的数的个数相同