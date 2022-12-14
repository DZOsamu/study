//
// Created by LEGION on 2022/11/15.
//
//自增和自减，后缀优先级高于前缀

#include<stdio.h>
int main() {
    int a = 12, b = 12;
    int c, d, e;
    c = a++;
    d = ++b;
    e = a++ + --b;
    printf("%d,%d,%d,%d,%d\n",a,b,c,d,e);
}

//输出结果：a = 14（a自增两次），b = 12（b自增又自减），c = 12，d = 13，e = 25（e = 自增后的a即13 + 自减前的b即12 =25）
//同一个语句中，不能出现同一个变量的多次自增自减运算