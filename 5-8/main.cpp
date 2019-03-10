/*7-8 打印直角三角形图案 （10 分）
从键盘输入正整数n，输出n行直角三角形图形。
输入格式:
输入在一行中给出一个正整数n。
输出格式:
输出n行直角三角形字符阵列。格式见输出样例，每个字符前后都没有空格。
输入样例:
5
输出样例:
1
11
111
1111
11111
*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << '1';
            if(j == i){
                cout << "\n";
            }
        }
    }
    return 0;
}