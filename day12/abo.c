//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>

void fun1(void );   //��������
void fun2(void );   //��������Ҫ�ں�������֮ǰ

void fun1(void) {   //��������
    //fun2();   //��������Ҫ�ں�������֮ǰ
    printf("fun1����\n");
}

void fun2(void) {
    fun1();   //����֮����Ի������
    printf("fun2����\n");
}

int main() {
    fun2();

    return 0;
}