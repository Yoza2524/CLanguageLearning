#include <stdio.h>

// 运算符
int main() {
    // 算数运算符，用于执行简单的数学运算
    int a = 20;
    int b = 10;
    float b1 = 10;
    printf("a + b = %d\n", a + b); // a + b = 30
    printf("a - b = %d\n", a - b); // a - b = 10
    printf("a * b = %d\n", a * b); // a * b = 200
    printf("a / b = %d\n", a / b); // a - b = 10
    // 两只int值的商依然是int，如果想要得到一个浮点数需要把其中一个数改为浮点数
    printf("a / b = %f\n", a / b); // a / b = 0.000000
    printf("a / b1 = %f\n", a / b1); //a / b1 = 2.000000

    // 自增和自减(在变量上加一或减一并赋值给变量)
    // 运算符在前表示语句执行前先赋值，运算符在后表示语句执行后赋值
    int x = 10;
    printf("x++ = %d\n", x++); // x++ = 10
    printf("++x = %d\n", ++x); // ++x = 12

    // 比较运算符 == >= <= != > <
    // 逻辑运算符 && || !

    // 位运算符 & | ^ ~ << >>
}