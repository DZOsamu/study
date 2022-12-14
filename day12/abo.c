//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>

void fun1(void );   //函数声明
void fun2(void );   //函数声明要在函数调用之前

void fun1(void) {   //函数定义
    //fun2();   //函数定义要在函数调用之前
    printf("fun1函数\n");
}

void fun2(void) {
    fun1();   //函数之间可以互相调用
    printf("fun2函数\n");
}

int main() {
    fun2();

    return 0;
}