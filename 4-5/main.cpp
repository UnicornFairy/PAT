/*4-5 各位数字之积
求任一正整数的各位数字之积。
输入格式:
输入一个正整数。
输出格式:
输出整数的各个位数字之积的结果。
输入样例:
135
输出样例:
15*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x,sum = 1,save,n = 0;
    cin >> x;
    save = x;
    for(int i = 10; save > 0;save /= i){
        n++;
    }
    save = x;
    for(int i = pow(10, n-1); i > 0; i /= 10){
        save /= i;
        sum *= save ;
        x %= i;
        save = x;
    }
    cout << sum;
    return 0;
}