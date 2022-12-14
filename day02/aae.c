//
// Created by LEGION on 2022/11/14.
//
//字节bit
// 1 kb = 1024 bit
// 1 Mb = 1024 kb
// 1 Gb = 1024 Mb
#include <stdio.h>

int main() {
    int a = 14;
    printf("%p\n",&a);  //取地址运算符&，每一个变量都有自己唯一的地址
    printf("%#p\n",&a);   //%p是以地址形式（16进制）输出，%#p是以地址形式输出并加上前缀0x
}

//表达式+ ; =语句

