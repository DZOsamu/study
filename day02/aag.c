//
// Created by LEGION on 2022/11/14.
//
#include <stdio.h>

int main() {
    float a = 1234.5678;   //默认6位小数,%f,4字节,单精度,5,7
    //1234.5678是double类型，直接输出可能会截断，在小数后面加f或F代表float类型可消除警告
    double b = 1234.5678912;   //%lf,8字节,双精度
    printf("%f\n%lf\n",a,b);

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));

    scanf("%f",&a);
    scanf("%lf",&b);   //scanf内转移字符必须对应，否则无法输出

    printf("%f\n",a);
    printf("%lf\n",b);

    printf("%e\t",0);
    printf("%e",0.0);   //浮点数赋值要赋0.0而不能赋0
}

//精度指有效数位，从第一个非零数字计算

