#include<bits/stdc++.h>
using namespace std;
class CTime
{
    int hour, minute, second;
public:
    CTime(int = 0, int = 0, int  = 0);
    CTime operator+(const CTime &);
    CTime operator-(const CTime &);
    CTime operator++();
    CTime operator++(int);
    CTime operator--();
    CTime operator--(int);
    friend ostream &operator<<(ostream &, const CTime &);
    friend istream &operator>>(istream &, CTime &);
};
CTime::CTime(int h, int m, int s)
: hour(h), minute(m), second(s)
{}
CTime CTime::operator+(const CTime &t)
{
    CTime temp;
    temp.second = second + t.second;
    temp.minute = minute + t.minute;
    temp.hour = hour + t.hour;
    if(temp.second >= 60)
    {
        temp.second -= 60;
        temp.minute++;
    }
    if(temp.minute >= 60)
    {
        temp.minute -= 60;
        temp.hour++;
    }
    return temp;
}
CTime CTime::operator-(const CTime &t)
{
    CTime temp;
    temp.second = second - t.second;
    temp.minute = minute - t.minute;
    temp.hour = hour - t.hour;
    if(temp.second < 0)
    {
        temp.second += 60;
        temp.minute--;
    }
    if(temp.minute < 0)
    {
        temp.minute += 60;
        temp.hour--;
    }
    return temp;
}
CTime CTime::operator++()
{
    second++;
    if(second >= 60)
    {
        second -= 60;
        minute++;
    }
    if(minute >= 60)
    {
        minute -= 60;
        hour++;
    }
    return *this;
}
CTime CTime::operator++(int)
{
    CTime temp(*this);
    second++;
    if(second >= 60)
    {
        second -= 60;
        minute++;
    }
    if(minute >= 60)
    {
        minute -= 60;
        hour++;
    }
    return temp;
}
CTime CTime::operator--()
{
    second--;
    if(second < 0)
    {
        second += 60;
        minute--;
    }
    if(minute < 0)
    {
        minute += 60;
        hour--;
    }
    return *this;
}
CTime CTime::operator--(int)
{
    CTime temp(*this);
    second--;
    if(second < 0)
    {
        second += 60;
        minute--;
    }
    if(minute < 0)
    {
        minute += 60;
        hour--;
    }
    return temp;
}
ostream &operator<<(ostream &os, const CTime &t)
{
    os << t.hour << ":" << t.minute << ":" << t.second;
    return os;
}
istream &operator>>(istream &is, CTime &t)
 {
    is >> t.hour >> t.minute >> t.second;
    return is;
}
int main()
{
    CTime a,b,c;
    int lc;
    do 
    {
        cout<<"Hay lua chon yeu cau cua ban: "<<endl;
        cout<<"1. Cong 2 gio"<<endl;
        cout<<"2. Tru 2 gio"<<endl;
        cout<<"3. Tang 1 giay"<<endl;
        cout<<"4. Giam 1 giay"<<endl;
        cout<<"5. Thoat"<<endl;
        cin>>lc;
        switch (lc)
        {
        case 1:
            cout<<"Nhap gio thu nhat: ";
            cin>>a;
            cout<<"Nhap gio thu hai: ";
            cin>>b;
            cout<<"Ket qua: "<<a+b<<endl;
            break;
        case 2:
            cout<<"Nhap gio thu nhat: ";
            cin>>a;
            cout<<"Nhap gio thu hai: ";
            cin>>b;
            cout<<"Ket qua: "<<a-b<<endl;
            break;
        case 3:
            cout<<"Nhap gio thu nhat: ";
            cin>>a;
            cout<<"Nhap gio thu hai: ";
            cin>>b;
            cout<<"Ket qua: "<<a++<<endl;
            break;
        case 4:
            cout<<"Nhap gio thu nhat: ";
            cin>>a;
            cout<<"Nhap gio thu hai: ";
            cin>>b;
            cout<<"Ket qua: "<<a--<<endl;
            break;
        case 5:
            break;
        default:
            cout<<"Lua chon khong hop le"<<endl;
            break;
        }
    } while (lc != 5);
}