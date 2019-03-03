/*2-9 偶数乘2奇数乘3
输入一个整数x，如果为偶数乘2，否则乘3，然后输出。
输入格式:
直接输入一个整数，没有其它任何附加字符。
输出格式:
在一行中按照“y=结果”的顺序输出，结果原样输出，没有其它附加格式。
输入样例:
3
输出样例:
y=9
输入样例:
2
输出样例:
y=4
*/
#include <iostream>

using namespace std;

int main() {
    int i;
    cin >> i;
    if(i % 2 == 0){
        cout << "y=" << i * 2;
    }else{
        cout << "y=" << i * 3;
    }
    return 0;
}