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

int main()
{
    CString a,b,c;
    cout<<"Luc chua khoi tao"<<endl;
    cout<<"a: "<<a;
    cout<<endl;
    cout<<"b: "<<a;
    cout<<endl;
    cout<<"c: "<<a;
    cout<<endl;
    cout<<"Nhap a,b,c"<<endl;
    cin>>a>>b>>c;
    cout<<"Chuoi duoc nhap gia tri"<<endl;
    cout<<"a: "<<a;
    cout<<endl;
    cout<<"b: "<<b;
    cout<<endl;
    cout<<"c: "<<c;
    cout<<endl;
    cout<<"Gan chuoi"<<endl;
    string s;
    cout<<"Hay nhap chuoi muon gan: ";
    getline(cin, s);
    cout<<"Truoc khi gan"<<endl;
    cout<<"a: "<<a;
    cout<<endl;
    a = s;
    cout<<"sau khi gan"<<endl;
    cout<<"a: "<<a;
    cout<<endl;
    cout<<"Cong hai chuoi"<<endl;
    cout<<"c truoc khi cong"<<endl;
    cout<<c;
    cout<<endl;
    cout<<"c sau khi cong"<<endl;
    c = a + b;
    cout<<c;
    cout<<endl;
    cout<<"So sanh hai chuoi"<<endl;
    cout<<"Hay nhap hai chuoi de so sanh"<<endl;
    cin>>a>>b;
    if (a == b) cout<<a<<" == "<<b;
    else cout<<a<<" != "<<b;
}