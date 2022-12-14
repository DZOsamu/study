//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
//无参数无返回值
void fun(void) {   //()后面不能加;
    printf("我是函数\n");
}
int main() {
    fun();   //函数调用

    printf("%d\n",fun);
    printf("%p\n",fun);   //函数名字就是函数地址
    printf("%p\n",&fun);

    (&fun)();   //也是函数调用

    return 0;
}