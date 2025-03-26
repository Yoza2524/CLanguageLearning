#include <stdio.h>

// 指针
// 在众多的现代化语言中，指针已经被舍弃
int main() {
    int a = 1;
    // 变量名前使用 * 表示这个变量为一个指针变量，*号位置不要求固定 但为了可读性一般在变量名前
    // 指针变量的类型需要和引用变量的类型保持一致
    int *p = &a; // 使用&引用变量的地址
    int* p2 = &a;
    int * p3 = &a;

    printf("a = %d \n", a); // a = 1 
    printf("p = %p \n", p); // p = 00000077E47FF914 
    printf("pd = %d \n", p); // pd = -461375212 
    printf("*pd = %d \n", *p); // *pd = 1 (使用*解引用) 

    //  二级指针
    int **pp = &p;
    printf("pp = %p \n", pp);
    printf("**pp = %d \n", **pp);
    
    // 在指针变量上可以通过 +- 操作来移动内存地址
}