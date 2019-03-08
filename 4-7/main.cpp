/*4-7 一批数中最大值最小值
从键盘输入若干学生的成绩，统计并输出最高成绩和最低成绩，当输入负数时循环结束。。
输入格式:
在一行中输入若干个用空格间隔的整数（不要超过15个数），最后输入负数结束输入，数据之间只能用1个空格间隔。
输出格式:
在一行中按照“max=最高分,min=最低分”的格式输出结果，最高分和最低分均原样输出，没有列宽控制。
输入样例:
58 78 95 65 86 -1
输出样例:
max=95,min=58
*/
#include <iostream>

using namespace std;

int main() {
    int a, max = 0, min = 100;
    while(1){
        cin >> a;
        if(a < 0){
            cout << "max=" << max << ",min=" << min;
            return 0;
        }
        if(a > max){
            max = a;
        }
        if(a < min){
            min = a;
        }
    }
}