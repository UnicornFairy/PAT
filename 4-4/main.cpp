/*4-4 判断素数
输入一个正整数m，如果它是素数，输出"YES"，否则，输出"NO"（素数就是只能被1和自身整除的正整数，1不是素数，2是素数）。
输入格式:
在一行中输入一个正整数m。
输出格式:
对每一组输入，在一行中输出结果并换行。
输入样例:
17
输出样例:
YES
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m;
    cin >> m;
    for(int i = sqrt(m); i > 1; i--){
        if(m % i == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}