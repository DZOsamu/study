//
// Created by LEGION on 2022/11/25.
//
#include <stdio.h>

int main() {
    int order;
    scanf("%d",&order);

    switch (order) {   //switch后面没有;
        case 1:   //case和标签之间要有空格，标签后面要有:
            printf("add\n");
            break;   //执行到break跳出
        case 2:   //标签只能写实型，不能写浮点型
            printf("delete\n");
            break;   //不加break会继续执行后面的语句
        case 3:
            printf("browse\n");
            break;
        case 4:
            printf("exit\n");
            break;
        default:   //默认处理，可不写
            printf("No instructions");
    }

    return 0;
}

//switch(条件)  条件必须是整型表达式，不要用表达范围的式子
//case 标签:  标签是整型常量表达式