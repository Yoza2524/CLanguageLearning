#include <stdio.h>

// 定义一个函数，接收两个值，返回两个值的和
int add(int a, int b){ // 这里的 a 和 b 为形参(Parameter)
    return a + b;
}

// 无返回值无参数的函数
void hello() {
    printf("Hello world!\n");
    return;
    printf("Hello world!!!!!!!"); // 不会执行

}

// 提前声明函数
int square(int n);


// 定义一个可以修改实参中变量的函数
int increase(int *i)
{
    return ++*i;
}

// 计算一个整形的阶乘
int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

// 函数
int main() {
    int x = 1;
    int y = 2;

    printf("sum = %d\n", add(x, y)); // 这里调用 add函数时 x 和 y 为实参(Argument)

    hello();

    // 调用提前声明的函数
    printf("sum = %d\n", add(x, y)); // 这里调用 add函数时 x 和 y 为实参(Argument)
    
    printf("power = %d\n", square(10)); // 100 

    // ---
    // 在C语言中默认的传值方式并不会修改实参的内容
    // 想要后续能够对实参有所改变的话，需要把引用当做实参传进函数
    int i = 99;
    increase(&i);
    printf("i = %d\n", i);

    // ---
    // 在C语言中，函数同样可以看作是一个数据类型，他的类型是他的 返回值 和 参数列表
    // 所以我们可以定义一个指针来指向一个函数 (函数指针)
    int (*p)(int *);
    p = increase;
    printf("p i = %d\n", p(&i));

    // ---
    // 递归，值在函数中调用自己
    printf("fact = %d\n", fact(5)); // 5 * 4 * 3 * 2 * 1 = 120

}

// 实现函数
int square(int n) {
    return n * n;
}