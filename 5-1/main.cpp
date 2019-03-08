/*7-1 求1!+3!+5!+……+n!
求1!+3!+5!+……+n!的和，要求用循环嵌套设计，n<12。
输入格式:
输入在一行中给出一个不超过12的正整数n。
输出格式:
在一行中按照格式“n=n值,s=阶乘和”的顺序输出，其中阶乘和是正整数。
输入样例:
5
输出样例:
n=5,s=127
 */
#include <iostream>

using namespace std;

int main() {
    int n, s = 0, sum;//sum是单层
    cin >> n;
    for(int i = 1; i <= n; i += 2){
        sum = 1;
        for(int j = 1; j <= i; j++){
            sum *= j;
        }
        s += sum;
    }
    cout << "n=" << n << ",s=" << s;
    return 0;
}