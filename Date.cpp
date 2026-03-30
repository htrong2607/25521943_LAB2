#include<iostream>
#include"Date.h"
using namespace std;
// hàm kiểm tra năm nhuận
bool NamNhuan(int nam)
{
    return (nam%400==0 || (nam%4==0 && nam%100!=0));
}
// ham tinh so ngay toi da trong 1 thang
int SoNgayTrongThang(int thang, int nam)
{
    if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
        return 31;
    if(thang==4||thang==6||thang==9||thang==11)
        return 30;
    if(thang==2)
    {
        if(NamNhuan(nam)) return 29;
        // nam nhuan thi thang 2 co 29 ngay
        else return 28;
    }
    return 0;
}
void Date::Nhap()
{
    cout<<"Nhap nam: "<<endl;
    while(cin>>iNam)
    {
        if(iNam>0) break;
        else cout<<"Nam khong hop le, vui long nhap lai: "<<endl;
    }
    cout<<"Nhap thang: "<<endl;
    while(cin>>iThang)
    {
        if(iThang>=1 && iThang<=12) break;
        else cout<<"Thang khong hop le, vui long nhap lai: "<<endl;
    }
    cout<<"Nhap ngay: "<<endl;
    while(cin>>iNgay)
    {
        int maxDay = SoNgayTrongThang(iThang, iNam);
        if(iNgay>=1 && iNgay<=maxDay) break;
        // neu ngay trong khoang [1,songaytoida cua thang do] thi hop le
        else cout<<"Ngay khong hop le, vui long nhap lai: "<<endl;
    }
}
void Date::Xuat()
{
    cout<<"Ngay "<<iNgay<<" Thang "<<iThang<<" Nam "<<iNam<<endl;
}
void Date::NgayThangNamTiepTheo()
{
    if(++iNgay>SoNgayTrongThang(iThang,iNam)) // ngay+1 > songaytoida thi qua thang moi
    {
        iNgay=1; // qua thang moi thi ngay =1
        iThang++; // qua thang moi
        if(iThang>12) // neu thang+1 > 12 thi qua nam moi
        {
            iThang=1; // nam moi thi thang = 1
            iNam++; // qua nam moi
        }
    }
}
