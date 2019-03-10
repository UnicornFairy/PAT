/*7-9 打印倒直角三角形图案 （10 分）
从键盘输入正整数n，输出n行倒直角三角形图形。。
输入格式:

输入在一行中给出一个正整数n。
输出格式:
输出n行直角三角形字符阵列。格式见输出样例，每个字符前后都没有空格。
输入样例:
5
输出样例:
11111
1111
111
11
1
*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << "1";
        }
        cout << endl;
    }
    return 0;
}