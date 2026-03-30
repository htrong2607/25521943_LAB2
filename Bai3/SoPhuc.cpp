#include<iostream>
#include "SoPhuc.h"
using namespace std;

void SoPhuc::Nhap()
{
    cout<<"Nhap phan thuc: "<<endl;
    cin>>iThuc;
    cout<<"Nhap phan ao: "<<endl;
    cin>>iAo;

}
void SoPhuc::Xuat()
{
    cout << iThuc;
    if(iAo >= 0)
        cout << " + " << iAo << "i";
    else
        cout << " - " << -iAo << "i";

    // mục đích để tránh lỗi hiển thị, nếu k làm vậy sẽ có trường hợp 34i, phải in ra 3+4i
}
SoPhuc SoPhuc::Tong(SoPhuc sp)
{
    SoPhuc kq;
    kq.iThuc=iThuc+sp.iThuc;
    kq.iAo=iAo+sp.iAo;
    return kq;
}
SoPhuc SoPhuc::Hieu(SoPhuc sp)
{
    SoPhuc kq;
    kq.iThuc=iThuc-sp.iThuc;
    kq.iAo=iAo-sp.iAo;
    return kq;
}
// Nhân hai số phức
// (a+bi)(c+di) = (ac - bd) + (ad + bc)i
SoPhuc SoPhuc::Tich(SoPhuc sp)
{
    SoPhuc kq;
    kq.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
    kq.iAo  = iThuc*sp.iAo + iAo*sp.iThuc;
    return kq;
}
// Chia hai số phức
// (a+bi)/(c+di) = [(ac+bd) + (bc-ad)i] / (c^2 + d^2)
SoPhuc SoPhuc::Thuong(SoPhuc sp)
{
    SoPhuc kq;
    kq.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo)/(sp.iThuc * sp.iThuc + sp.iAo * sp.iAo);
    kq.iAo  = (iAo*sp.iThuc-iThuc*sp.iAo)/(sp.iThuc * sp.iThuc + sp.iAo * sp.iAo);
    return kq;
}

