#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s)){
        for (auto &c : s)
            if (ispunct(c))
                c = ' ';
    cout << s << endl;  
    }
system("pause");
return 0;
}