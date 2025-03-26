#include <stdio.h>

// 一个用于计数的函数
int count();

// 静态变量
int main() {
    // 正常情况下，在函数内部每次定义一个变量都会开辟一块内存空间，并在函数结束后释放
    // 如果我们想要每次调用函数都使用上次保留的值，就需要使用 static 关键字
    printf("count = %d \n", count()); // 1
    printf("count = %d \n", count()); // 2
    printf("count = %d \n", count()); // 3
    printf("count = %d \n", count()); // 4
    printf("count = %d \n", count()); // 5
    printf("count = %d \n", count()); // 6
    printf("count = %d \n", count()); // 7
    printf("count = %d \n", count()); // 8
}

int count()
{
    // 静态变量的生命周期等同于程序的生命周期，不会在函数结束时被释放
    static int i = 0; // 除了第一次执行到此处时，i不会重新赋值为0
    return ++i;
}

// 同时 static关键字 也可以用来修饰 全局变量 和 函数，表示这个 变量/函数 只能在当前文件中使用