#include<bits/stdc++.h>
using namespace std;

void xoa()
{
    system("cls");
}
void dungxoa()
{
    cout<<endl;
    system("pause");
    xoa();
}
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
    friend bool operator == (sophuc, sophuc);
    friend bool operator != (sophuc, sophuc);
    friend bool operator > (sophuc, sophuc);
    friend bool operator <= (sophuc, sophuc);
    friend bool operator < (sophuc, sophuc);
    friend bool operator >= (sophuc, sophuc);
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
sophuc operator / (sophuc a, sophuc b)
{
    sophuc c;
    double temp0 = pow(b.ao ,2) + pow(b.thuc ,2);
    double temp1 = a.thuc*b.thuc + a.ao*b.ao;
    double temp2 = b.thuc*a.ao - a.thuc*b.ao;
    c.thuc = temp1/temp0;
    c.ao = temp2/temp0;  
    return c;
}
bool operator == (sophuc a, sophuc b)
{
    return a.ao == b.ao && a.thuc == b.thuc;
}
bool operator != (sophuc a, sophuc b)
{
    return !(a==b);
}
bool operator > (sophuc a, sophuc b)
{
    return  sqrt(pow(a.thuc, 2) + pow(a.ao, 2)) > sqrt(pow(b.thuc, 2) + pow(b.ao, 2));
}
bool operator <= (sophuc a, sophuc b)
{
    return !(a > b);
}
bool operator < (sophuc a, sophuc b)
{
    return sqrt(pow(a.thuc, 2) + pow(a.ao, 2)) < sqrt(pow(b.thuc, 2) + pow(b.ao, 2));
}
bool operator >= (sophuc a, sophuc b)
{
    return !(a < b);
}


int main()
{
   sophuc a, b, c;
   cout<<"Nhap hai so phuc\n";
   cin>>a;
   cin>>b;
   cout<<a<<endl;
   cout<<b<<endl;
   c = a + b;
   cout<<"Tong hai so phuc: "<<c<<endl;
   c = a - b;
   cout<<"Hieu hai so phuc: "<<c<<endl;
    c = a * b;
   cout<<"Tich hai so phuc: "<<c<<endl;
    c = a / b;
   cout<<"Thuong hai so phuc: "<<c<<endl;
   if (a == b) cout<<a<<" == "<<b<<endl;
   if (a != b) cout<<a<<" != "<<b<<endl;
   if (a > b) cout<<a<<" > "<<b<<endl;
   if (a >= b) cout<<a<<" >= "<<b<<endl;
   if (a < b) cout<<a<<" < "<<b<<endl;
   if ( a <= b ) cout<<a<<" <= "<<b<<endl;
}