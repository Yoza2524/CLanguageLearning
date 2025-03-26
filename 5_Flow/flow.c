# include <stdio.h>

// 流程控制
int main() {
    /*
        if (条件) {
            如果条件返回true则执行的代码块 
        }
        else if (条件) {
            如果条件返回true则执行的代码块 
        }
        else {
            以上都不满足的时候执行的代码块
        }
    */
   int x = 1;
   if (x > 0) {
    // 大括号中如果只有一行则可以省略大括号
    printf("x是正数\n");
   }

   // 三元运算符 条件 ? 语句1 : 语句2
   int y = 1;
   y % 2 == 1 ? printf("y是奇数\n") : printf("y是偶数\n");

   /*
        switch (标识符)
        {
            case 表达式 :
                代码块
                break;
            case 表达式 :
                代码块
                break;
            ...
            default:
                break;
        }
   */
  int z = 5;
  switch (z--)
  {
  case 4:
    printf("z==4");
    break;
  
    case 5:
        printf("z==5");
        // break;

  default:
    printf("z: %d\n", z);
    break;
  }
}