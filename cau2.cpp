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
    cin>>a;
    cin>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    c = a + b;
    cout<<a<<" + "<<b<<" = "<<c<<endl;
    c = a - b;
    cout<<a<<" - "<<b<<" = "<<c<<endl;
    c = a * b;
    cout<<a<<" * "<<b<<" = "<<c<<endl;
    c = a / b;
    cout<<a<<" / "<<b<<" = "<<c<<endl;
    if (a == b) cout<<a<<" = "<<b<<endl;
    if (a != b) cout<<a<<" != "<<b<<endl;
    if (a > b) cout<<a<<" > "<<b<<endl;
    if (a >= b) cout<<a<<" >= "<<b<<endl;
    if (a < b) cout<<a<<" < "<<b<<endl;
    if (a <= b) cout<<a<<" <= "<<b<<endl;
    cout<<"++a "<<++a<<endl;
    cout<<"a++"<<a++<<endl;
    cout<<"--a "<<--a<<endl;
    cout<<"a--"<<a--<<endl;
}