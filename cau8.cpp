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
    CVector v1(1, 2), v2(3, 4);
    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    cout << "v1 + v2 = " << v1 + v2 << endl;
    cout << "v1 - v2 = " << v1 - v2 << endl;
    cout << "++v1 = " << ++v1 << endl;
    cout << "v1++ = " << v1++ << endl;
    cout << "--v1 = " << --v1 << endl;
    cout << "v1-- = " << v1-- << endl;
    return 0;
}