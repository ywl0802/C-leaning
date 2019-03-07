#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;
int main(){
    Sales_data data1, data2;
    //读入data1和data2的代码
    //读入第一笔交易
    double price = 0;    //书的单价，用于计算销售收入
    cin >> data1.bookNo >> data1.units_sold >> price;    //读入第一笔交易：ISBN、销售数量、单价
    data1.revenue = data1.units_sold * price;    //计算销售收入
    //读入第二笔交易
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    if (data1.bookNo == data2.bookNo){    //检查两笔交易ISBN是否相同
        unsigned totalCnt = data1.units_sold + data2.units_sold;    //计算总销售数量
        double totalRevenue = data1.revenue + data2.revenue;    //计算总利润
        //输出：ISBN、总销售量、总销售额
        cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        //计算并输出平均价格
        if (totalCnt != 0)
            cout << totalRevenue/totalCnt << endl;
        else 
            cout << "(no sales)" << endl;
        return 0;   //标示成功
    }else { //两笔交易的ISBN不一样
        cerr << "Data must refer to the same ISBN" << endl;
        return -1;  //标示失败
    }
}