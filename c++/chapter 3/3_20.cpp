#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
using namespace std;
int main()
{
    vector<int> numbers;
    //auto n ;  //auto类型只是编译器会自动根据赋值类型判断数据类型，实际上并没有这种数据类型。
    int number;
    while(cin >> number){   
            numbers.push_back(number);
    }//while之后就没有执行了 解决这个问题 
    if (numbers.size() == 0) {
        cout << "The input is failure! " << endl;
    } else {
        if (numbers.size()/2 == 0 ){
            for (int i = 0; i <= numbers.size()/2; ++i)
                cout << numbers[i] + numbers[numbers.size()-1-i] << endl;
        }else{
            for (int j = 0; j <= (numbers.size()-1)/2; ++j)
                cout << numbers[j] + numbers[numbers.size()-1-j]  << endl;
        }
    }
    system("pause");
    return 0;
}