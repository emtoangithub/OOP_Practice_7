#include<bits/stdc++.h>
using namespace std;

class sophuc
{
    private:
    double ao,thuc;
    public:
    sophuc(double = 0, double =0 );
    friend istream& operator >> (  istream& in , sophuc& );
    friend ostream& operator << (ostream& out, sophuc );
    friend sophuc operator + (sophuc, sophuc);
    friend sophuc operator - (sophuc, sophuc);
    friend sophuc operator * (sophuc, sophuc);
    friend sophuc operator / (sophuc, sophuc);
};
sophuc :: sophuc(double a, double b)
: thuc(a), ao(b)
{}
istream& operator >> (  istream& in , sophuc& a)
{
    cout<<"Thuc: ";
    in>>a.thuc;
    cout<<"Ao: ";
    in>>a.ao;
    return in;
}
ostream& operator << (ostream& out, sophuc a)
{
    cout<<fixed<<setprecision(2)<<a.thuc<<" + "<<fixed<<setprecision(2)<<a.ao<<"i";
}
sophuc operator+(sophuc a, sophuc b)
{
    sophuc c;
    c.ao=a.ao+b.ao;
    c.thuc=a.thuc+b.thuc;
    return c;
}
sophuc operator - (sophuc a, sophuc b)
{
    sophuc c;
    c.ao=a.ao-b.ao;
    c.thuc=a.thuc-b.thuc;
    return c;
}
sophuc operator * (sophuc a, sophuc b)
{
    sophuc c;
    c.thuc = a.thuc*b.thuc - a.ao*b.ao;
    c.ao = a.ao*b.thuc + a.thuc*b.ao;
    return c;
}


int main()
{
    sophuc a, b, c;
    cin>>a;
    cin>>b;
    c = a+b;
    cout<<c;
}