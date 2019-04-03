/*自然常数e可以用级数1+1/1!+1/2!+⋯+1/n!来近似计算。本题要求对给定的非负整数n，求该级数的前n项和。
输入格式:

输入第一行中给出非负整数n（≤1000）。
输出格式:

在一行中输出部分和的值，保留小数点后八位。
输入样例:

10
输出样例:

2.71828180
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double e = 1,jpig = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        jpig *= i;
        e += 1/jpig;
    }
    cout << fixed << setprecision(8) << e;
    return 0;
}