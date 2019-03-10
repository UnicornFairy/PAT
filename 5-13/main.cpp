/*7-13 打印如样例所示直角三角形图案4 （10 分）
从键盘输入正整数n，输出n行如样例所示直角三角形图形。
输入格式:
输入在一行中给出一个正整数n。
输出格式:
输出n行直角三角形字符阵列。格式见输出样例，每个两个数值之间有一个空格，最后一行的第一个数之前没有空格。
输入样例:
5
输出样例:
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <=n; i++){
        for(int k = 2 * n; k > 2 * i; k--){
            cout << ' ';
        }
        for(int j = 1; j <= i; j++){
            cout << j;
            if(i != j){
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}