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
int lc;
do
{
    cout<<"Hay chon yeu cau cua ban: "<<endl;
    cout<<"1. Nhap 2 so phuc"<<endl;
    cout<<"2. Cong 2 so phuc"<<endl;
    cout<<"3. Tru 2 so phuc"<<endl;
    cout<<"4. Nhan 2 so phuc"<<endl;
    cout<<"5. Chia 2 so phuc"<<endl;
    cout<<"6. Kiem tra 2 so phuc bang nhau"<<endl;
    cout<<"7. Kiem tra 2 so phuc khac nhau"<<endl;
    cout<<"8. Kiem tra 2 so phuc lon hon"<<endl;
    cout<<"9. Kiem tra 2 so phuc nho hon"<<endl;
    cout<<"10. Kiem tra 2 so phuc lon hon hoac bang"<<endl;
    cout<<"11. Kiem tra 2 so phuc nho hon hoac bang"<<endl;
    cout<<"12. Thoat"<<endl;
    cin>>lc;
    switch (lc)
    {
        case 1:
            cout<<"Nhap 2 so phuc: "<<endl;
            cin>>a>>b;
            dungxoa();
            break;
        case 2:
            cout<<"Cong 2 so phuc: "<<endl;
            c=a+b;
            cout<<a<<" + "<<b<<" = "<<c<<endl;
            dungxoa();
            break;
        case 3:
            cout<<"Tru 2 so phuc: "<<endl;
            c=a-b;
            cout<<a<<" - "<<b<<" = "<<c<<endl;
            dungxoa();
            break;
        case 4:
            cout<<"Nhan 2 so phuc: "<<endl;
            c=a*b;
            cout<<a<<" * "<<b<<" = "<<c<<endl;
            dungxoa();
            break;
        case 5:
            cout<<"Chia 2 so phuc: "<<endl;
            c=a/b;
            cout<<a<<" / "<<b<<" = "<<c<<endl;
            dungxoa();
            break;
        case 6:
            cout<<"Kiem tra 2 so phuc bang nhau: "<<endl;
            if (a==b)
            {
                cout<<a<<" = "<<b<<endl;
            }
            else
            {
                cout<<a<<" != "<<b<<endl;
            }
            dungxoa();
            break;
        case 7:
            cout<<"Kiem tra 2 so phuc khac nhau: "<<endl;
            if (a!=b)
            {
                cout<<a<<" != "<<b<<endl;
            }
            else
            {
                cout<<a<<" = "<<b<<endl;
            }
            dungxoa();
            break;
        case 8:
            cout<<"Kiem tra 2 so phuc lon hon: "<<endl;
            if (a>b)
            {
                cout<<a<<" > "<<b<<endl;
            }
            else
            {
                cout<<a<<" <= "<<b<<endl;
            }
            dungxoa();
            break;
        case 9:
            cout<<"Kiem tra 2 so phuc nho hon: "<<endl;
            if (a<b)
            {
                cout<<a<<" < "<<b<<endl;
            }
            else
            {
                cout<<a<<" >= "<<b<<endl;
            }
            dungxoa();
            break;
        case 10:
            cout<<"Kiem tra 2 so phuc lon hon hoac bang: "<<endl;
            if (a>=b)
            {
                cout<<a<<" >= "<<b<<endl;
            }
            else
            {
                cout<<a<<" < "<<b<<endl;
            }
            dungxoa();
            break;
        case 11:
            cout<<"Kiem tra 2 so phuc nho hon hoac bang: "<<endl;
            if (a<=b)
            {
                cout<<a<<" <= "<<b<<endl;
            }
            else
            {
                cout<<a<<" > "<<b<<endl;
            }
            dungxoa();
            break;
        case 12:
            cout<<"Thoat chuong trinh"<<endl;
            return 0;
        default:
            cout<<"Hay chon lai yeu cau"<<endl;
            dungxoa();
            break;
} 
} while ( lc != 0 );
}
