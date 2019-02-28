/*7-11 华氏温度转化为摄氏温度 （10 分）
将华氏温度转化为摄氏温度（下式中c表示摄氏温度，f表示华氏温度）。
  c=5/9 (f-32)
输入格式:
直接输入一个实数，没有其它任何附加字符。
输出格式:
在一行中按照“c=结果”的顺序输出，结果为保留2位小数的实数，没有其它任何附加格式控制。
输入样例:
34
输出样例:
c=1.11
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double f;
    cin >> f;
    cout << fixed << setprecision(2) << "c=" << 5 / 9.0 * (f - 32);
    return 0;
}