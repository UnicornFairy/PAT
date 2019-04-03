/*5 水仙花数
水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1
​3
​​ +5
​3
​​ +3
​3
​​ 。 本题要求编写程序,计算所有N位水仙花数。
输入格式:
输入在一行中给出一个正整数N（3≤N≤7）。
输出格式:
按递增顺序输出所有N位水仙花数，每个数字占一行。
输入样例:
3
输出样例:
153
370
371
407*/
#include <iostream>
#include <cmath>

using namespace std;

//int main() {
//    int n,  sum = 0, x;  //x是个位寄存
//    cin >> n;  //N位数（>=3 <=7）
//    for(int i = pow(10.0,n - 1),save = i; i < pow(10.0,n); i++){   //从三位开始数字的累加至7位9
//        for(int j = pow(10.0,n - 1) ; save > 0; j /= 10){   //计算每位上的数字
//            x = save / j;
//            save = 1;
//            for(int k = n; k > 0; k--){    //每位数字的n次累乘
//                save *= x;
//            }
//            sum += save;
//            save = i % j;
//            if(j != 1 && save == 0){
//                break;
//            }
//        }
//        if(sum == i){
//            cout << i << endl;
//        }
//        sum = 0;
//        save = i + 1;
//    }
//    return 0;
//}

int main(){
    int n,a[10] = {0,1,2,3,4,5,6,7,8,9},save,sum = 0;
    cin >> n;
    for(int i = 0; i < 10 ;i++){   //数组记录各个位数字n次幂
        for(int j = 0; j < n - 1; j++){
            a[i] *= i;
        }
    }
    for(int k = pow(10.0,n - 1); k < pow(10.0,n); k++){      //累加至7位数
        for(int l = pow(10.0,n - 1),save = k; save > 0; l /= 10){   //求得每位数字
            save = save / l;
            sum += a[save];
            save = k % l;
            if(save == 0 && l != 1){
                break;
            }
        }

        if(sum == k){
            cout << k << endl;
        }
        sum = 0;
    }
    return 0;
}