// Nạp chồng thêm a--, --a, ++b, b++
#include<bits/stdc++.h>
using namespace std;

class phanso
{
    private:
    int tu, mau;
    public:
    phanso(int = 0, int = 1);
    phanso rutgon();
    friend istream& operator >> (istream& in, phanso&);
    friend ostream& operator << (ostream& out, phanso);
    int UCLN(int , int);
    friend phanso operator + (phanso, phanso);
    friend phanso operator - (phanso, phanso);
    friend phanso operator * (phanso, phanso);
    friend phanso operator / (phanso, phanso);
    friend bool operator == (phanso, phanso);
    friend bool operator != (phanso, phanso);
    friend bool operator > (phanso, phanso);
    friend bool operator <= (phanso, phanso);
    friend bool operator < (phanso, phanso);
    friend bool operator >= (phanso, phanso);
    phanso operator ++ ();
    phanso operator ++ (int);
    phanso operator -- ();
    phanso operator -- (int);
};
phanso phanso :: operator++()
{
    tu += mau;
    return *this;
}
phanso phanso :: operator++(int)
{
    phanso pst = *this;
    tu += mau;
}
phanso phanso :: operator--()
{
    tu -= mau;
    return *this;
}
phanso phanso :: operator--(int)
{
    phanso pst = *this;
    tu -= mau;
}
int phanso :: UCLN(int a, int b)
{
    if (b == 0) return a;
    if (a % b == 0) return b;
    return UCLN(b, a%b);
}
phanso :: phanso(int a, int b)
: tu(a), mau(b)
{}
istream& operator >> (istream& in, phanso& a )
{
    cout<<"Tu so: ";
    in>>a.tu;
    do
    {
    cout<<"Mau so ( khac 0 ): ";
    in>>a.mau;
    } while ( a.mau == 0);
    return in;
}
ostream& operator << (ostream& out, phanso n)
{
    n.rutgon();
    if (n.mau<-1) out<<-n.tu<<"/"<<-n.mau;
    else if (n.mau==-1) out<<-n.tu;
    else if (n.mau==0) out<<"Khong chia duoc";
    else if (n.mau==1) out<<n.tu;
    else out<<n.tu<<"/"<<n.mau; 
}
phanso phanso :: rutgon()
{
    int tmp = UCLN(tu, mau);
    tu /= tmp;
    mau /= tmp;
}
phanso operator + (phanso m, phanso n)
{
    phanso a;
    if (m.mau==n.mau)
    {
        a.tu=m.tu+n.tu;
        a.mau=m.mau;
    }
    else if (m.mau<n.mau)
    {
        if (n.mau % m.mau ==0)
        {
            a.tu=m.tu*(n.mau/m.mau)+n.tu;
            a.mau=n.mau;
        }
        else
        {
            int temp=m.mau*n.mau;
            int x=temp/m.mau;
            int y=temp/n.mau;
            a.tu=m.tu*x+n.tu*y;
            a.mau=temp;
        }
    }
    else
    {
        if (m.mau % n.mau ==0)
        {
            a.tu=n.tu*(m.mau/n.mau)+m.tu;
            a.mau=m.mau;
        }
        else
        {
        int temp=m.mau*n.mau;
            int x=temp/m.mau;
            int y=temp/n.mau;
            a.tu=m.tu*x+n.tu*y;
            a.mau=temp;
        }
    }
    a.rutgon();
    return a;
}
phanso operator - (phanso m, phanso n)
{
    phanso a;
    if (m.mau==n.mau)
    {
        a.tu=m.tu-n.tu;
        a.mau=m.mau;
    }
    else if (m.mau<n.mau)
    {
        if (n.mau % m.mau ==0)
        {
            a.tu=m.tu*(n.mau/m.mau)-n.tu;
            a.mau=n.mau;
        }
        else
        {
            int temp=m.mau*n.mau;
            int x=temp/m.mau;
            int y=temp/n.mau;
            a.tu=m.tu*x-n.tu*y;
            a.mau=temp;
        }
    }
    else
    {
        if (m.mau % n.mau ==0)
        {
            a.tu=n.tu*(m.mau/n.mau)-m.tu;
            a.mau=m.mau;
        }
        else
        {
        int temp=m.mau*n.mau;
            int x=temp/m.mau;
            int y=temp/n.mau;
            a.tu=m.tu*x-n.tu*y;
            a.mau=temp;
        }
    }
    a.rutgon();
    return a;
}
phanso operator * (phanso a, phanso b)
{
    phanso c;
    if (a.tu==0 || b.tu==0) 
    {
        c.tu=0;c.mau=1;
        return c;
    }
    else 
    {
        c.tu=a.tu*b.tu;
        c.mau=a.mau*b.mau;
    }
    c.rutgon();
    return c;
}
phanso operator / (phanso a, phanso b)
{
    phanso c;
    c.tu=a.tu*b.mau;
    c.mau=a.mau*b.tu;
    c.rutgon();
    return c;
}
bool operator == (phanso a, phanso b)
{
    a.rutgon();
    b.rutgon();
    if (a.tu == b.tu && a.mau == b.mau) return true;
    return false;
}
bool operator != (phanso a, phanso b)
{
    return !(a==b);
}
bool operator > (phanso a, phanso b)
{
    a.rutgon();
    b.rutgon();
    return a.tu/a.mau > b.tu/b.mau;
}
bool operator <= (phanso a, phanso b)
{
    return !(a > b);
}
bool operator < (phanso a, phanso b)
{
    a.rutgon();
    b.rutgon();
    return a.tu/a.mau < b.tu/b.mau;
}
bool operator >= (phanso a, phanso b)
{
    return !(a < b);
}

int main()
{
   phanso a,b,c;
   int lc;
do
{
    cout<<"Hay chon yeu cau: "<<endl;
    cout<<"1. Nhap phan so"<<endl;
    cout<<"2. Xuat phan so"<<endl;
    cout<<"3. Cong hai phan so"<<endl;
    cout<<"4. Tru hai phan so"<<endl;
    cout<<"5. Nhan hai phan so"<<endl;
    cout<<"6. Chia hai phan so"<<endl;
    cout<<"7. Kiem tra hai phan so bang nhau"<<endl;
    cout<<"8. Kiem tra hai phan so lon hon"<<endl;
    cout<<"9. Kiem tra hai phan so nho hon"<<endl;
    cout<<"10. Kiem tra hai phan so lon hon hoac bang"<<endl;
    cout<<"11. Kiem tra hai phan so nho hon hoac bang"<<endl;
    cout<<"12. Thoat"<<endl;
    cin>>lc;
    switch (lc)
    {
    case 1:
        cout<<"Nhap phan so thu nhat: "<<endl;
        cin>>a;
        cout<<"Nhap phan so thu hai: "<<endl;
        cin>>b;
        break;
    case 2:
        cout<<"Phan so thu nhat: "<<endl;
        cout<<a;
        cout<<"Phan so thu hai: "<<endl;
        cout<<b;
        system("pause");
        break;
    case 3:
        c=a+b;
        cout<<"Tong hai phan so: "<<endl;
        cout<<c;
        system("pause");
        break;
    case 4:
        c=a-b;
        cout<<"Hieu hai phan so: "<<endl;
        cout<<c;
        system("pause");
        break;
    case 5: 
        c=a*b;
        cout<<"Tich hai phan so: "<<endl;
        cout<<c;
        system("pause");
        break;
    case 6:
        c=a/b;
        cout<<"Thuong hai phan so: "<<endl;
        cout<<c;
        system("pause");
        break;
    case 7:
        if (a==b) cout<<"Hai phan so bang nhau"<<endl;
        else cout<<"Hai phan so khong bang nhau"<<endl;
        system("pause");
        break;
    case 8:
        if (a>b) cout<<"Hai phan so lon hon"<<endl;
        else cout<<"Hai phan so khong lon hon"<<endl;
        system("pause");
        break;
    case 9:
        if (a<b) cout<<"Hai phan so nho hon"<<endl;
        else cout<<"Hai phan so khong nho hon"<<endl;
        system("pause");
        break;
    case 10:
        if (a>=b) cout<<"Hai phan so lon hon hoac bang"<<endl;
        else cout<<"Hai phan so khong lon hon hoac bang"<<endl;
        system("pause");
        break;
    case 11:
        if (a<=b) cout<<"Hai phan so nho hon hoac bang"<<endl;
        else cout<<"Hai phan so khong nho hon hoac bang"<<endl;
        system("pause");
        break;
    case 12:
        cout<<"Cam on ban da su dung chuong trinh"<<endl;
        system("pause");
        break;
    default:
        cout<<"Hay chon lai"<<endl;
        break;
    }
} while (lc!=12);
}