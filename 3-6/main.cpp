/*3-6 念数字
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：
输入在一行中给出一个整数，如：1234。
提示：整数包括负数、零和正数。
输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。
输入样例：
-600
输出样例：
fu liu ling ling
 */
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x, n = 0,t;
    cin >> x;
    if(x < 0) {      //判断并移除负号
        cout << "fu ";
        x *= -1;
    }else if(x == 0){     //判0
        cout << "ling";
        return 0;
    }
    for (int save = x; save > 0; save /= 10) {     //判断位数
        n++;
    }
    for (int i = pow(10,(n - 1)); x > 0; i /= 10) {   //逐位输出
        t = x / i;    //存储计算后x的值用来判断
        switch (t) {
            case 0:
                cout << "ling";
                break;
            case 1:
                cout << "yi";
                break;
            case 2:
                cout << "er";
                break;
            case 3:
                cout << "san";
                break;
            case 4:
                cout << "si";
                break;
            case 5:
                cout << "wu";
                break;
            case 6:
                cout << "liu";
                break;
            case 7:
                cout << "qi";
                break;
            case 8:
                cout << "ba";
                break;
            case 9:
                cout << "jiu";
                break;
        }
        cout << ' ';     //控制每次输出后的空格
        x %= i;
        if(x == 0 && i == pow(10,(n - 1))){     //判断是否为仅最高位不为0的整数
            for(int j = 0; j < n - 1; j++) {
                if(j != 0){
                    cout << " ";     //控制0间的空格
                }
                cout << "ling";
            }
        }
    }
    return 0;
}
