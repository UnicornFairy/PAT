/*
7-5 求圆周长
输入圆的半径r，求其周长并输出。
输入格式:
输入一个大于零的实数，没有任何附加字符。
输出格式:
按照“s=周长”的格式输出，周长是一个保留6位小数的实数，没有任何附加字符。
输入样例:
1
输出样例:
s=6.280000
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double r;
    cin >> r ;
    cout << fixed << "s="  << setprecision(6) << 3.14 * 2 * r << endl;
    return 0;
}