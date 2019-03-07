#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
using namespace std;
int main()
{
    vector<string> text;
    //auto n ; 
    //auto类型只是编译器会自动根据赋值类型判断数据类型，实际上并没有这种数据类型。
    string word;
    while(cin >> word){   
            text.push_back(word);
    }//while之后就没有执行了 解决这个问题  非阻塞输入检查，详见代码末尾
    if (text.size() == 0) {
        cout << "The input is failure! " << endl;
    } else {
        for(auto i : text)
            cout << i <<" ";
        cout << endl;}
    system("pause");
    return 0;
}

 /*解答来源：http://bbs.suda123.com/Archiver/webbiancheng/thread-253234-1.html
方法：回车后，在新行Ctrl+z并回车。若输入数据后Ctrl+z再回车无效。

原因：

输入缓冲是行缓冲。当从键盘上输入一串字符并按回车后，这些字符会首先被送到输入缓冲区中存储。
每当按下回车键后，cin.get()就会检测输入缓冲区中是否有了可读的数据。cin.get()还会对键盘
上是否有作为流结束标志的Ctrl+Z或者Ctrl+D键按下作出检查，其检查的方式有两种：阻塞式以及
非阻塞式。
阻塞式检查方式指的是只有在回车键按下之后才对此前是否有Ctrl+Z组合键按下进行检查，非阻塞式
样指的是按下Ctrl+D之后立即响应的方式。如果在按Ctrl+D之前已经从键盘输入了字符，则Ctrl+D的
作用就相当于回车，即把这些字符送到输入缓冲区供读取使用，此时Ctrl+D不再起流结束符的作用。
如果按Ctrl+D之前没有任何键盘输入，则Ctrl+D就是流结束的信号。
Windows系统中一般采用阻塞式检查Ctrl+Z、Unix/Linux系统下一般采用非阻塞式的检查Ctrl+D。
楼主是在Windows系统下，因此使用阻塞式的Ctrl+Z来标识流的结束。
这种阻塞式的方式有一个特点：只有按下回车之后才有可能检测在此之前是否有Ctrl+Z按下。还有
一个特点就是：如果输入缓冲区中有可读的数据则不会检测Ctrl+Z（因为有要读的数据，还不能认
为到了流的末尾）。还有一点需要知道：Ctrl+Z产生的不是一个普通的ASCII码值，也就是说它产生
的不是一个字符，所以不会跟其它从键盘上输入的字符一样能够存放在输入缓冲区。明白了这几点之
后就可以来解释楼主提出的问题了。

从键盘上输入abcd^z加回车之后在Windows系统上是这样处理的：由于回车的作用，前面的abcd等字符
被送到输入缓冲区（注意：上面说过了，^z不会产生字符，所以更不会存储到输入缓冲区，缓冲区中没
有^z的存在）。这时，cin.get()检测到输入缓冲区中已经有数据存在（因此不再检查是否有^z的输入），于是从缓冲中读取相应的数据。如果都读取完了，则输入缓冲区重新变为空，
cin.get()等待新的输入。可见，尽管有^z按下，但是由于在此之前还有其它输入字符（abcd），
所以流也不会结束。
因此，输入流结束的条件就是：^z之前不能有任何字符输入（回车除外），否则^z起不到流结束的作用。*/