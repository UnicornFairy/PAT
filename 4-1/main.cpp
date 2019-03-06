/*4-1 求整数的位数及各位数字之和
对于给定的正整数N，求它的位数及其各位数字之和。
输入格式：
输入在一行中给出一个不超过10的9次方的正整数N。
输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。
输入样例：
321
输出样例：
3 6
 */
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n,count = 0,sum = 0,save;
    cin >> n;
    save = n;
    while(save > 0){
        save = save / 10;
        count++;
    }
    for(int i = pow(10 ,count); n > 0; i /= 10){
        sum += (n / i);
        n %= i;
    }
    cout << count << " " << sum;
    return 0;
}