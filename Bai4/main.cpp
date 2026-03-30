#include<iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time a;
    a.Nhap();
    a.Xuat();
    cout<<endl;
    a.TinhCongThemMotGiay();
    cout<<"Sau khi tang len mot giay: "<<endl;
    a.Xuat();
    return 0;
}
