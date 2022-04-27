#include<bits/stdc++.h>
using namespace std;
class CString
{
    private:
    string s;
    public:
    CString(string = "Allocated");
    ~CString();
    void xuat(); 
    friend istream& operator >> (istream &in, CString &s);
    friend ostream& operator << (ostream& out, CString s);
    friend CString operator + (CString, CString);
    friend void operator &= (CString&, string);
    friend bool operator == (CString, CString);
    friend bool operator != (CString, CString);
    friend CString operator & (CString, CString);
};
CString :: ~CString()
{
    this->s = "NULL";
}
CString :: CString(string a)
: s(a)
{}
void CString :: xuat()
{
    cout<<this->s;
}
ostream& operator << (ostream& out, CString s)
{
    out<<s.s;
}
istream& operator >> (istream& in, CString &s)
{
    cout<<"Hay nhap chuoi: ";
    getline(in, s.s);
    //cin.ignore();
    return in;
}
CString operator + (CString a, CString b)
{
    CString tmp(a.s + b.s);
    return tmp;
}
void operator &= (CString& a, string b)
{
    a.s = b;
}
bool operator == (CString a, CString b)
{
    return a.s == b.s;
}
bool operator != (CString a, CString b)
{
    return !(a == b);
}
CString operator & (CString a, CString b)
{
    CString tmp;
    for(int i = 0; i < a.s.length(); i++)
    {
        for(int j = 0; j < b.s.length(); j++)
        {
            if(a.s[i] == b.s[j])
            {
                tmp.s += a.s[i];
            }
        }
    }
    return tmp;
}

int main()
{
    CString a,b,c;
    int lc;
    do 
    {
        cout<<"Hay chon yeu cau cua ban: "<<endl;
        cout<<"1. Nhap chuoi"<<endl;
        cout<<"2. Xuat chuoi"<<endl;
        cout<<"3. Cong chuoi"<<endl;
        cout<<"4. Hieu chuoi"<<endl;
        cout<<"5. So sanh chuoi"<<endl;
        cout<<"6. Thoat"<<endl;
        cin>>lc;
        switch (lc)
        {
            case 1:
                cin>>a;
                break;
            case 2:
                cout<<a;
                break;
            case 3:
                c = a + b;
                cout<<c;
                break;
            case 4:
                c = a & b;
                cout<<c;
                break;
            case 5:
                if (a == b)
                {
                    cout<<"Chuoi a bang chuoi b";
                }
                else
                {
                    cout<<"Chuoi a khong bang chuoi b";
                }
                break;
            case 6:
                break;
            default:
                cout<<"Hay chon lai yeu cau";
                break;
        }
    } while (lc != 6);
}