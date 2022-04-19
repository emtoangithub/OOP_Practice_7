#include<bits/stdc++.h>
using namespace std;
class hocsinh
{
private:
    string hoten;
    int tuoi;
    string diachi;
public:
friend istream& operator>>(istream& is,hocsinh& hs);
friend ostream& operator<<(ostream& os,hocsinh& hs);
};
istream& operator>>(istream& is,hocsinh& hs)
{
    is>>hs.hoten>>hs.tuoi>>hs.diachi;
    return is;
}
ostream& operator<<(ostream& os,hocsinh& hs)
{
    os<<hs.hoten<<" "<<hs.tuoi<<" "<<hs.diachi;
    return os;
}