//
// Created by LEGION on 2022/11/24.
//
//编写一个函数，判断一个数是否为素数
#include<stdio.h>
void prime(int num);
int main() {
    int num;
    scanf("%d", &num);
    prime(num);  //返回值就是prime(num)这个整体的值等于多少，返回1的话 prime(num) == 1 ，返回0也是这个道理。

}
void prime(int num) {                                          //循环判断条件里的num可以改成sqrt(num),以此提高效率（需调用math库）
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
           printf("no");   //进来if，返回函数返回1，下面的代码就不执行了
           return;
        }
    }
    //循环结束没进if，函数返回0
    printf("yes");
}


/*
#include<stdio.h>

int prime(int num);
int main()
{
    int num;
    scanf("%d", &num);
    if(prime(num))//返回值就是prime(num)这个整体的值等于多少，返回1的话 prime(num) == 1 ，返回0也是这个道理。
    {
        //prime(num) == 1 的时候就是 if(1)，就判断num不是素数
        printf("%d不是素数",num);
    }
    else{
        //prime(num) == 0 的时候就是if(0)没进if，进入了else，就判断num是素数
        printf("%d是素数",num);
    }
}
int prime(int num)
{
    //循环判断条件里的num可以改成sqrt(num),以此提高效率（需调用math库）
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 1;
            //进来if，返回函数返回1，下面的代码就不执行了
        }
    }
    //循环结束没进if，函数返回0
    return 0;
}
 */