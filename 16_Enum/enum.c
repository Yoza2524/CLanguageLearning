#include <stdio.h>


enum weekday {
    SUN, MON, TUE, WED, THU, FRI, SAT
}; 

enum weekday_abaaba {
    SUN_a, MON_a = 3, TUE_a, WED_a, THU_a, FRI_a, SAT_a
}; 

// 枚举
int main() {
    // 如果一个类型的可能的值是有限的，那么就可以使用枚举定义
    // 常用的比如: 星期 颜色 ...
    enum weekday today = WED;
    // 枚举中值默认为从 0 开始的整数
    printf("day = %d \n", today); // 3

    // 将 阿巴阿巴 这个枚举类型的周一赋值为3
    enum weekday_abaaba today_abaaba = WED_a;
    printf("day = %d \n", today_abaaba); // 5

}