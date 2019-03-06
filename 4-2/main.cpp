/*4-2 逆序输出数的各位数字
从键盘上输入一个正整数，逆序输出该数的各位数字。 例如：输入123，输出321。
输入格式:
直接输入一个正整数，没有其它任何附加字符。
输出格式:
直接输出一结果，没有其它任何附加字符。
输入样例:
123
输出样例:
321
 */
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    for(; x > 0; x /= 10){
        cout << x % 10;
    }
    return 0;
}