/*3-5 分段函数3
输入整数x，计算y并输出。公式如下所示：
输入格式:
直接输入一个整数，没有其它任何附加字符。
输出格式:
按照“y=结果”的格式顺序输出，其中结果是保留6位小数的原样输出，没有其它任何附加格式控制。
输入样例:
5
输出样例:
y=8.000000
输入样例:
-2
输出样例:
y=-1.000000
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    double y;
    cin >> x;
    if(x >= 0){
        y = x + 3;
    }else{
        y = x / 2;
    }
    cout << fixed << "y=" << setprecision(6) << y;
    return 0;
}