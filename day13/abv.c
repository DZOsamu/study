//
// Created by LEGION on 2022/12/6.
//
#include <stdio.h>
void fun(int a, double d) {
    printf("%d,%.2lf\n", a, d);
}

void fun1(int a, double d) {
    printf("%d,%.2lf\n", a, d);
}

int main(void) {
    fun(12,13.13);

    int c = 14;
    double e = 15.15;
    fun1(c,e);

}