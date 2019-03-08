/*4-6 一批数中能被3或7整除的数之和
输入一批正整数，用-1作终止标记。求其中能被3或7整除的数之和。
输入格式:
在一行中输入若干个用空格间隔的整数（不要超过15个数），最后输入-1结束输入，数据之间只能用1个空格间隔。
输出格式:
直接输出整型结果，没有其它任何附加字符。
输入样例:
3 5 6 8 9 14 25 -1
输出样例:
32
*/
#include <iostream>

using namespace std;

int main() {
    int a,sum = 0;
    while(1){
        cin >> a;
        if(a == -1){
            cout << sum;
            return 0;
        }
        if(a % 3 == 0 || a % 7 == 0){
            sum += a;
        }
    }
}