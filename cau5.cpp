#include<bits/stdc++.h>
using namespace std;
class CDate
{
    private:
    int ngay, thang, nam;
    public:
    CDate(int = 0, int = 0, int = 0);
    friend istream& operator >> (istream &in, CDate&);
    friend ostream& operator << (ostream &out, CDate);
    friend CDate operator + (CDate, CDate);
    friend CDate operator - (CDate, CDate);
    CDate operator ++ ();
    CDate operator -- ();
};
CDate :: CDate(int a, int b, int c)
: ngay(a), thang(b), nam(c)
{}
CDate CDate :: operator++()
{
    ngay++;
    return *this;
}
CDate CDate :: operator--()
{
    ngay--;
    return *this;
}
CDate operator - (CDate q, CDate b)
{
   if (q.ngay - b.ngay < 0)
   {
       q.ngay += 30;
       q.thang--;
   }
    if (q.thang - b.thang < 0)
    {
         q.thang += 12;
         q.nam--;
    }
    q.ngay -= b.ngay;
    q.thang -= b.thang;
    q.nam -= b.nam;
    return q;
  
}
CDate operator + (CDate a, CDate b)
{
    if (a.ngay + b.ngay > 30)
    {
        a.ngay -= 30;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 31)
    {
        a.ngay -= 31;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 28)
    {
        a.ngay -= 28;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 29)
    {
        a.ngay -= 29;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 30)
    {
        a.ngay -= 30;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 31)
    {
        a.ngay -= 31;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 28)
    {
        a.ngay -= 28;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 29)
    {
        a.ngay -= 29;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 30)
    {
        a.ngay -= 30;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 31)
    {
        a.ngay -= 31;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 28)
    {
        a.ngay -= 28;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 29)
    {
        a.ngay -= 29;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 30)
    {
        a.ngay -= 30;
        a.thang++;
    }
    else if (a.ngay + b.ngay > 31)
    {
        a.ngay -= 31;
        a.thang++;
    }
    if (a.thang + b.thang > 12)
    {
        a.thang -= 12;
        a.nam++;
    }
    a.ngay += b.ngay;
    a.thang += b.thang;
    a.nam += b.nam;
    return a;
}
istream& operator >> (istream &in, CDate& a)
{
    cout<<"Ngay: ";
    in>>a.ngay;
    cout<<"Thang: ";
    in>>a.thang;
    cout<<"Nam: ";
    in>>a.nam;
    return in;
}
ostream& operator << (ostream &out, CDate a)
{
    out<<a.ngay<<"/"<<a.thang<<"/"<<a.nam;
    out<<endl;
}
int main()
{
    CDate a, b, c;
    int lc;
   do 
   {
    cout<<"Hay lua chon yeu cau"<<endl;
    cout<<"1. Nhap ngay thang nam"<<endl;
    cout<<"2. Xuat ngay thang nam"<<endl;
    cout<<"3. Tinh khoang cach giua 2 ngay"<<endl;
    cout<<"4. Tong 2 ngay"<<endl;
    cout<<"5. Hieu 2 ngay"<<endl;
    cout<<"6. Tang 1 ngay"<<endl;
    cout<<"7. Giam 1 ngay"<<endl;
    cout<<"8. Thoat"<<endl;
    cin>>lc;
    switch (lc)
    {
        case 1:
            cin>>a;
            cin>>b;
            break;
        case 2:
            cout<<a;
            cout<<b;
            break;
        case 3:
            c = a - b;
            cout<<c;
            break;
        case 4:
            c = a + b;
            cout<<c;
            break;
        case 5:
            c = a - b;
            cout<<c;
            break;
        case 6:
            c = ++a;
            cout<<c;
            break;
        case 7:
            c = --a;
            cout<<c;
            break;
        case 8:
            break;
        default:
            cout<<"Hay chon lai yeu cau"<<endl;
    }
   } while (lc != 8);
    return 0;
}