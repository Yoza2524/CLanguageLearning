#include <stdio.h>
// 全局变量: 可以在当前代码中任何位置访问
// 全局变量没有被赋值会被初始化为0
int global;

int main() {
    // 定义变量 age
    int age = 20;

    printf("你的年龄是%d岁 \n", age);

    // 只声明变量而不赋值的时候, 变量的值为一个随机数
    int num;
    printf("没有赋值的数字%d \n", num); // TODO: 教程上是一个随机数, 但是运行是每次都是8
    num = 1;

    // 变量的作用范围: [ 局部变量 | 全局变量 ]

    // 代码块(c语言中使用一对大括号括起来的代码)
    {
        // 代码块中定义的变量为局部变量
        // 只能在当前代码快中使用
        int local;
        printf("local = %d \n", local); // local = 0
        printf("global = %d \n", global); // global = 100
    }

    // printf("local = %d \n", local); // error: use identifier "local" is undefined
    printf("global = %d \n", global); // global = 100
    return 0;
}
