/*6 两个实数的平方和
输入两个实数，输出它们的平方和。
输入格式:
在一行中输入两个实数，之间用1个空格间隔。
输出格式:
按照“z=结果”的格式输出。
输入样例:
2.3 2.5
输出样例:
z=11.54
*/
#include <iostream>

using namespace std;

int main() {
    double i,j;
    cin >> i >> j;
    cout << "z=" << (i * i) + (j * j) << endl;
    return 0;
}