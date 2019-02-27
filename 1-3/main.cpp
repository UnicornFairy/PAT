/*7-3 求一个实数x的n倍。
求一个实数x的n倍。
输入格式:
在一行中输入一个实数和一个整数，两个数之间用一个空格间隔，没有其他任何普通字符。
输出格式:
在一行中按照“y=结果”。
输入样例:
在这里给出一组输入。例如：
1.5 2
输出样例:
y=3
 */
#include <iostream>

using namespace std;

int main() {
    double s;
    int z;
    cin >> s >> z;
    cout << "y=" << (int)(s + z);
    return 0;
}