#include<iostream><stdio.h>
int main()
{
    int sum = 0, val = 1;
    //使用while循环，val值小于10时执行循环
    while (val <= 10) {
        sum += val; //将 sum + val 赋值与 sum
        ++val;      //将val加1
    } 
    std::cout << "Sum of 1 to 10 inclusive is " 
              << sum << std::endl;
    system("pause");
    return 0;
}