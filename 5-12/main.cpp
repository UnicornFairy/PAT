/*7-12 打印如样例所示直角三角形3
从键盘输入正整数n，设n小于14，输出n行如样例所示直角三角形图形。
输入格式:
输入在一行中给出一个正整数n。
输出格式:
输出n行直角三角形字符阵列。格式见输出样例，所有数右对齐，且每个数值的宽度是3。
输入样例:
5
输出样例:
 1
 2  3
 4  5  6
 7  8  9 10
11 12 13 14 15
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n,all = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << setw(3) << ++all;
        }
        cout << endl;
    }
    return 0;
}