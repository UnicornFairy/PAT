/*求 Sn＝a+aa+aaa+...+aa...a之值，其中a是一个数字。例如: 2+22+222+2222(此时n＝4)，n由键盘输入。
输入格式:

在一行中按照“a=x , n=y”格式顺序输入。其中x 、y均为正整数。
输出格式:

直接输出结果，没有任何附加字符。
输入样例:

a=2,n=4
输出样例:

2468
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,a,sum = 0,t;
    getchar();
    getchar();
    a = getchar() - 48;
    getchar();
    getchar();
    getchar();
    n = getchar() - 48;
    t = n;
    for(int i = 0; i < n; i++){
            sum += t * a * pow(10, i);
            t--;
            if(t == 0){
                break;
            }
    }
    cout << sum;
    return 0;
}