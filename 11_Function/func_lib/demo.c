#include <stdio.h>
#include "lib.h"

// 引用外部库中的函数
int main() {
    // 在实际工作中，
    // 经常要把需要的函数声明放到一个头文件中，函数的定义放到一个源文件或一个库文件中
    // 用来给 项目 或 其他项目使用
    int a = 20;
    int b = 10;

    printf("a + b = %d \n", add(a, b));    
    printf("a - b = %d \n", subtract(a, b));    
    printf("a * b = %d \n", multiply(a, b));    
    printf("a / b = %d \n", divide(a, b));    
}