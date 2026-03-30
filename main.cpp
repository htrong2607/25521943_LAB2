#include<iostream>
#include"Date.h"

using namespace std;
int main()
{
    Date a;
    a.Nhap();
    cout<<"Ngay ban vua nhap la: "<<endl;
    a.Xuat();
    a.NgayThangNamTiepTheo();
    cout<<"Ngay tiep theo la: "<<endl;
    a.Xuat();
    return 0;
}

