/*7-4 输出100～200之间素数 （10 分）
求出100～200之间的全部素数，每行输出8个数，每个数宽度为5列。
输出格式:

每行输出8个素数数，每个素数宽度为5列。
输出样例:

  101  103  107  109  113  127  131  137
  139  149  151  157  163  167  173  179
  181  191  193  197  199
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n = 0;
    for(int i = 101; i < 200; i += 2){
        for(int j = 3; j < i; j += 2){
            if(i % j == 0){
                break;
            }
            if(j == i - 2){
                cout << setw(5) << i;
                n++;
                if(n == 8){
                    cout << "\n";
                    n = 0;
                }
            }
        }
    }
    return 0;
}