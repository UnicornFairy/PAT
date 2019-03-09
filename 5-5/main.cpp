/*7-5 小于m的最大的10个素数
给定一个整数m（50<m<20000），找出小于m的最大的10个素数。
输入格式:
输入在一行中给出一个正整数m（50<m<20000）。
输出格式:
在一行中按递减顺序输出10个满足条件的素数，每个素数输出占6列。没有其它任何附加格式和字符。
输入样例:
229
输出样例:
   227   223   211   199   197   193   191   181   179   173
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int m, n = 0;
    bool isSuShu = true;
    cin >> m;
    m = m - 1;
    for (; m > 50; m--) {
        isSuShu = true;
        for (int j = sqrt(m); j > 1; j--) {
            if (m % 2 == 0) {
                isSuShu = false;
            }
            if (m % j == 0) {
                isSuShu = false;
            }
        }
        if (isSuShu) {
            cout << setw(6) << m;
            n++;
        }
        if (n == 10) {
            break;
        }
    }
    return 0;
}