#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int main()
{
    int ia[ 6 ] = { 27, 210, 12 , 47, 109, 83 };
    //ia为一个int类型的array
    vector<int,allocator<int>> vi(ia, ia+6);
    //指定创建int类型的vector容器vi，并且使用分配器为容器分配int类型数据
    //vi中赋值ia中的前六位
    cout << count_if(vi.begin(), vi.end(),
                not1(bind2nd(less<int>(), 40)));//判断式，大于等于40
    /*
    count_if函数的作用是当判断式为true时计数，
    vi.begin(),vi.end()指明了count_if函数的作用范围，为迭代器
    not1()为仿函数适配器，作用是否定
    bind2nd也是仿函数适配器，作用是将less的第二参数绑定为40，令vi中的每个元素和40作比较
    less<int>当vi中的元素小于40时，返回1
    */
    return 0;
}