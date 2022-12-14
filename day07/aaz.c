//
// Created by LEGION on 2022/11/24.
//
//案例要求：
//重复录入学生成绩
//打出成绩评级
//输入-1退出系统
//输入非法数据提示重新输入,并重新输入
//提示欢迎使用系统和感谢使用系统
#include <stdio.h>
int main() {
    printf("Welcome to use.\n");

    while (1) {
        int score;
        printf("score=");
        scanf("%d",&score);
        if(score == -1) {
            break;
        }

        if (score >= 0 && score < 60) {
            printf("fail\n");
        } else if (score >= 60 && score < 75) {
            printf("pass\n");
        } else if (score >= 75 && score < 90) {
            printf("good\n");
        } else if(score >= 90 && score <= 100){
            printf("perfect\n");
        } else {
            printf("Error,please re-enter.\n");
            continue;
        }
    }

    printf("Thanks to use.\n");
    return 0;
}