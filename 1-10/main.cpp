/*7-10 输出各位数字 （10 分）
给定一个三位正整数，输出其百位数字、十位数字及个位数字。
输入格式:
直接输入一个三位正整数，没有其它任何附加字符。
输出格式:
在一行中输出所输入正整数的各个位数字，各个数字之间用逗号间隔，没有其它任何附加字符。
输入样例:
258
输出样例:
2,5,8
*/
#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    for(int i = 100; i > 0; i /= 10){
        cout << x / i;
        if(x > 9)
            cout << ',';
        x %= i;
    }
    return 0;
}