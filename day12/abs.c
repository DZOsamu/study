//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
void fun() {
    printf("fun,fun\n");
    return;   //用于终止无返回值的函数
    printf("fun\n");
}
int main(){
    fun();

    return 0;
}