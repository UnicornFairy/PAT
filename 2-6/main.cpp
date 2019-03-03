/*2-6 判断是否构成三角形
输入三角形的三边，判断是否能构成三角形。若能构成输出YES，否则输出NO。
输入格式:
在一行中直接输入3个整数，3个整数之间各用一个空格间隔，没有其他任何附加字符。
输出格式:
直接输出YES或NO，没有其他任何附加字符。
输入样例:
4 5 6
输出样例:
YES
输入样例:
2 2 4
输出样例:
NO
*/

#include <iostream>

using namespace std;

int main() {
    int i,j,k;
    cin >> i >> j >> k;
    if(i + j > k && j + k > i && i + k > j)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}