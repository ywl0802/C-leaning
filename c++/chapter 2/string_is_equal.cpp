#include<iostream>
#include<string>
using namespace std;
int main()
{
    string read1, read2;
    cout << "Enter two string:" << endl;
    cin >> read1 >> read2;
    if (read1.size() == read2.size())
        cout << "Size of two string is equal." << endl;
    else
        cout << "Size of two string is not equal." << endl;
        if (read1.size() > read2.size())
            cout << "The longer string is:" << read1 << endl;
        else  
        cout << "The longer string is:" << read2 << endl;
    system("pause");
    return 0;
}