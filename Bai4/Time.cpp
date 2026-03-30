#include<iostream>
#include "Time.h"
using namespace std;

void Time::Nhap()
{
    cout<<"Nhap Giay: ";
    cin>>iGiay;
    cout<<"Nhap Phut: ";
    cin>>iPhut;
    cout<<"Nhap Gio: ";
    cin>>iGio;
    if(iGiay>=60)
    {

        while(iGiay>=60)
        {
            iGiay-=60;
            ++iPhut;
        }   // Chuyển thời gian về đúng logic,
            // ví dụ 62 giây là 1 phút 2 giây
            // trừ iGiay 1 lượng 60 và cộng 1 phút cho đến khi nào iGiay<60
        if(iPhut>=60)
        {
            while(iPhut>=60)
            {
                iPhut-=60; // tương tự như giây giây và phútt chỉ có thể < 60
                ++iGio;
            }
        }
    }
}
void Time::Xuat()
{
    cout<<iGio<<" Gio "<<iPhut<<" Phut "<<iGiay<<" Giay";
}
void Time::TinhCongThemMotGiay()
{
    iGiay++;
    if(iGiay>=60)
    {
        ++iPhut;
        iGiay=0;
        if(iPhut>=60)
        {
            ++iGio;
            iPhut=0;
        }
    }
}
