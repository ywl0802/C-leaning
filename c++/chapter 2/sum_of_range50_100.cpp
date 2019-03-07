#include<iostream><stdio.h>
int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum <<std::endl;
    system("pause");
}