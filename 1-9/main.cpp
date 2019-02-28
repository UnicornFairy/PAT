/*
7-9 3个整数平均值
输入三个整数，求其平均值。
输入格式:
在一行中输入3个整数，3个整数之间各用一个空格间隔，没有其它任何普通字符。
输出格式:
在一行中按照“aver=结果”的顺序输出，结果是保留6位小数原样输出，没有其它附加格式。
输入样例:
2 5 1
输出样例:
aver=2.666667
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i,j,k;
    cin >> i >> j >> k;
    cout << "aver=" << fixed << setprecision(6) << (i + j + k) / 3.0;
    return 0;
}