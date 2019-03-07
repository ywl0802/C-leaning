#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
using namespace std;
int main()
{
    vector<int> numbers;
    vector<string> text;
    //auto n ;  //auto类型只是编译器会自动根据赋值类型判断数据类型，实际上并没有这种数据类型。
    string word;
    while(cin >> word){   
            text.push_back(word);
    }//while之后就没有执行了 解决这个问题 
    if (text.size() == 0) {
        cout << "The input is failure! " << endl;
    } else {
        auto first = text.begin();
        for(auto item = text.begin() ; item != text.end() ; ++item)
            if (item == first){
                for (auto letter = (*item).begin() ; letter != (*item).end() ; ++letter)
                    *letter = toupper(*letter);
                cout << *item << endl;
            }else{
                cout << *item << endl;
            }
        cout << endl;}
    system("pause");
    return 0;
}