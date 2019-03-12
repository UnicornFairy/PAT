/*7-14 打印等腰三角形图案 （10 分）
从键盘输入正整数n，输出n行如样例所示等腰三角形图形。
输入格式:
输入在一行中给出一个正整数n。
输出格式:
输出n行直角三角形字符阵列。格式见输出样例，每个字符前后都没有空格。
输入样例:
5
输出样例:

        1
       111
      11111
     1111111
    111111111
*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n - i; k++ ){
            cout << ' ';
        }
        for(int j = 0; j < 2 * i + 1; j++){
            cout << '1';
        }
        cout << endl;
    }
    return 0;
}