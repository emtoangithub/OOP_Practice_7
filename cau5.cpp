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
    int ngay1, thang1, nam1;
    ngay1 = q.ngay - b.ngay;
    thang1 = q.thang - b.thang;
    nam1 = q.nam - b.nam;
    if(ngay1 < 0)
    {
        ngay1 += 30;
        thang1--;
    }
    if(thang1 < 0)
    {
        thang1 += 12;
        nam1--;
    }
    return CDate(ngay1, thang1, nam1);
}
CDate operator + (CDate a, CDate b)
{
    CDate c;
    c.ngay = a.ngay + b.ngay;
    c.thang = a.thang + b.thang;
    c.nam = a.nam + b.nam;
    while(c.ngay > 30)
    {
        c.ngay -= 30;
        c.thang++;
    }
    while(c.thang > 12)
    {
        c.thang -= 12;
        c.nam++;
    }
    return c;
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