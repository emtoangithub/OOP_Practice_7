#include<bits/stdc++.h>
using namespace std;
class CVector
{
    int x, y;
public:
    CVector(int = 0, int = 0);
    CVector operator+(const CVector &);
    CVector operator-(const CVector &);
    CVector operator++();
    CVector operator++(int);
    CVector operator--();
    CVector operator--(int);
    friend ostream &operator<<(ostream &, const CVector &);
    friend istream &operator>>(istream &, CVector &);
};
CVector::CVector(int x, int y)
: x(x), y(y)
{}
CVector CVector::operator+(const CVector &v)
{
    CVector temp;
    temp.x = x + v.x;
    temp.y = y + v.y;
    return temp;
}
CVector CVector::operator-(const CVector &v)
{
    CVector temp;
    temp.x = x - v.x;
    temp.y = y - v.y;
    return temp;
}
CVector CVector::operator++()
{
    x++;
    y++;
    return *this;
}
CVector CVector::operator++(int)
{
    CVector temp = *this;
    x++;
    y++;
    return temp;
}
CVector CVector::operator--()
{
    x--;
    y--;
    return *this;
}
CVector CVector::operator--(int)
{
    CVector temp = *this;
    x--;
    y--;
    return temp;
}
ostream &operator<<(ostream &os, const CVector &v)
{
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}
istream &operator>>(istream &is, CVector &v)
{
    is >> v.x >> v.y;
    return is;
}
int main()
{
    CVector a,b,c;
    int lc;
    do
    {
        cout<<"Hay nhap yeu cau cua ban: "<<endl;
        cout<<"1. Nhap hai vecto"<<endl;
        cout<<"2.Tinh toan 2 vector"<<endl;
        cout<<"3.Tinh toan 1 vector voi 1 so"<<endl;
        cout<<"4.Tinh toan 1 vector voi 1 vector"<<endl;
        cout<<"5.Thoat"<<endl;
        cin>>lc;
        switch (lc)
        {
        case 1:
            cout<<"Nhap vector a: "; 
            cin>>a;
            cout<<"Nhap vector b: "; 
            cin>>b;
            break;
        case 2:
            c=a+b;
            cout<<"Ket qua cua phep cong 2 vector la: "<<c<<endl;
            break;
        case 3: 
            c=a+b;
            cout<<"Ket qua cua phep cong 1 vector voi 1 so la: "<<c<<endl;
            break;
        case 4:
            c=a-b;
            cout<<"Ket qua cua phep tru 1 vector voi 1 vector la: "<<c<<endl;
            break;
        case 5:
            break;
        default:
            cout<<"Hay nhap lai yeu cau cua ban"<<endl;
            break;
        }
    } while (lc!=5);
}