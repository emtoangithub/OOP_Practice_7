#include<bits/stdc++.h>
using namespace std;
class INTEGER
{
    int x;
public:
    INTEGER(int = 0);
    INTEGER operator+(const INTEGER &);
    INTEGER operator-(const INTEGER &);
    INTEGER operator++();
    INTEGER operator++(int);
    INTEGER operator--();
    INTEGER operator--(int);
    friend ostream &operator<<(ostream &, const INTEGER &);
    friend istream &operator>>(istream &, INTEGER &);
};
INTEGER::INTEGER(int x)
: x(x)
{}
INTEGER INTEGER::operator+(const INTEGER &v)
{
    INTEGER temp;
    temp.x = x + v.x;
    return temp;
}
INTEGER INTEGER::operator-(const INTEGER &v)
{
    INTEGER temp;
    temp.x = x - v.x;
    return temp;
}
INTEGER INTEGER::operator++()
{
    x++;
    return *this;
}
INTEGER INTEGER::operator++(int)
{
    INTEGER temp = *this;
    x++;
    return temp;
}
INTEGER INTEGER::operator--()
{
    x--;
    return *this;
}
INTEGER INTEGER::operator--(int)
{
    INTEGER temp = *this;
    x--;
    return temp;
}
ostream &operator<<(ostream &os, const INTEGER &v)
{
    os << v.x;
    return os;
}
istream &operator>>(istream &is, INTEGER &v)
{
    is >> v.x;
    return is;
}
int main()
{
    INTEGER a(1), b(2), c(3);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a++ << endl;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;
    cout << --a << endl;
    cout << a << endl;
    return 0;
}
