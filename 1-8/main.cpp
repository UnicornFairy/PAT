/*7-8 三个整数之和 （10 分）
输入三个整数求和并输出。
输入格式:
在一行中输入3个整数，3个整数之间用一个空格间隔，没有其它任何附加字符。
输出格式:
在一行中按照“sum=结果”的顺序输出，其中结果为原样输出。
输入样例:
4 5 6
输出样例:
sum=15
*/
#include <iostream>

using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    cout << "sum=" << x + y + z << endl;
    return 0;
}