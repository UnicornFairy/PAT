/*2-2 交换两个整型变量a和b的值。 （10 分）
交换两个整型变量a和b的值。
输入格式:
在一行中输入两个整数，两个数之间用一个空格间隔，没有其他任何普通字符。
输出格式:
在一行中按照“a=结果,b=结果”形式输出交换后的值。
输入样例:
5 2
输出样例:
a=2,b=5
*/
#include <iostream>

using namespace std;

int main() {
    int a,b,t = 0;
    cin >> a >> b;
    t = a;
    a = b;
    b = t;
    cout << "a=" << a << ",b=" << b << endl;
    return 0;
}