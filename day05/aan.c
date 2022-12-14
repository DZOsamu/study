//
// Created by LEGION on 2022/11/19.
//
#include <stdio.h>

int main() {
    int a = 0, b;

    (a = 2 > 1)&&(b = 2);
    printf("%d,%d\t",a,b);
    (a = 2 < 1)&&(b = 3);   //短路原则，遇到假就不判断了
    printf("%d,%d\n",a,b);

    (a = 2 < 1)||(b = 4);
    printf("%d,%d\t",a,b);
    (a = 2 > 1)||(b = 5);   //短路原则，遇到真就不判断了
    printf("%d,%d\n",a,b);

    return  0;
}