#include <stdio.h>

// 循环语句
int main() {
    /*
        while (条件) {
            代码块
        }
    */

    int i = 0;
    while (i <= 10)
    {
        printf("i = %d\n", i);
        i++;
    }

    /* 
        do {
            代码块
        } while (条件);
    在while循环的基础上，先执行 再判断，循环体中的代码至少执行一次
    */

    /* 
        for (定义; 条件; 迭代) {
            代码块
        }
    > for循环中的定义 条件和迭代都可以不写，但要保留分号，形如 for (; 条件;)
    > 当不写条件的时候也可以使用 break; 语句来跳出循环
    > 也可以使用 continue; 语句来跳出当次循环，直接进入到下次循环
    */
   for (int i = 0; i <= 5; i++)
   {
        // 可以使用 goto语句 来跳转到指定的代码位置
        // 一般情况下不推荐使用 goto语句，会破坏代码的结构
        if (i == 3) goto inner_mark;
        // 同时可以跳转到代码外
        if (i == 5) goto outer_mark;
        printf("i   = %d\n", i);

        inner_mark:
        printf("after print\n");
   }
   outer_mark:
   printf("for loop end~");
}