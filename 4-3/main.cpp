/*4-3 最大公约数和最小公倍数
本题要求两个给定正整数的最大公约数和最小公倍数。
输入格式:
输入在一行中给出两个正整数M和N（≤1000）。
输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。
输入样例:
511 292
输出样例:
73 2044
 */
#include <iostream>

using namespace std;

int main() {
    int m, n, max, min;
    cin >> m >> n;
    int gcd(int, int);
    max = gcd(m, n);
    min = (m * n) / max;
    cout << max << " " << min;
    return 0;
}

int gcd(int x, int y) {
    if (x % y == 0) {
        return y;
    }
    return gcd(y, x % y);
}