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
    CTime t1(1, 2, 3), t2(4, 5, 6);
    CTime t3 = t1 + t2;
    CTime t4 = t1 - t2;
    CTime t5 = ++t1;
    CTime t6 = t1++;
    CTime t7 = --t1;
    CTime t8 = t1--;
    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;
    cout << t4 << endl;
    cout << t5 << endl;
    cout << t6 << endl;
    cout << t7 << endl;
    cout << t8 << endl;
    return 0;
}