/*7-11 打印如图所示直角三角形图案2
从键盘输入正整数n，输出n行如样例所示直角三角形图形。
输入格式:
输入在一行中给出一个正整数n。
输出格式:
输出n行直角三角形字符阵列。格式见输出样例，每两个字符之间有一个空格。
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
    int m;
    cin >> m;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
            if(i == j){
                cout << endl;
                break;
            }else{
                cout << ' ';
            }
        }
    }
    return 0;
}