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
    cout<<"Nhap ngay dau tien"<<endl;
    cin>>a;
    cout<<"Nhap ngay thu hai"<<endl;
    cin>>b;
    cout<<"Ngay thu nhat: "<<a;
    cout<<"Ngay thu hai: "<<b;
    c = a + b;
    cout<<"Ngay thu nhat cong ngay thu hai: "<<c;
    c = a - b;
    cout<<"Ngay thu nhat tru ngay thu hai: "<<c;
    cout<<"Ngay thu nhat ++: "<<++a;
    cout<<"Ngay thu hai ++: "<<++b;
    cout<<"Ngay thu nhat --: "<<--a;
    cout<<"Ngay thu hai --: "<<--b;
    cout<<"Hay nhap mot so: ";
    int n; cin>>n;
    cout<<"Ngay thu nhat khi cong: "<<a + n;
}