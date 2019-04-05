/*7-1 使用递归函数计算1到n之和 （10 分)
本题要求实现一个用递归计算1+2+3+…+n的和的简单函数。
函数接口定义：

int sum( int n );
该函数对于传入的正整数n返回1+2+3+…+n的和；若n不是正整数则返回0。题目保证输入输出在长整型范围内。建议尝试写成递归函数。
裁判测试程序样例：

#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

输入样例1：

10
输出样例1：

55
输入样例2：

0
输出样例2：

0
*/
#include <iostream>
#include <stdio.h>

int sum( int n );

int main()
{
    int n;
    scanf("%d", &n);
    printf ("%d\n", sum(n));
    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }else if(n <= 0) {
        return 0;
    }
    return sum(n-1) + n;
}