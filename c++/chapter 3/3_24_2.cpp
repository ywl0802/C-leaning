#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
using namespace std;
int main()
{
    vector<int> numbers;
    int number;
    while(cin >> number){   
            numbers.push_back(number);
    }
    if (numbers.size() == 0) {
        cout << "The input is failure! " << endl;
    } else {
        for(auto item = numbers.begin(); 
        item <= numbers.begin() + (numbers.end() - numbers.begin())/2;
        ++item)
            cout << *item + *(numbers.end()-int(item - numbers.begin()) - 1)
            <<endl;
    }
    system("pause");
    return 0;
}