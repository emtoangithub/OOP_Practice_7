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
    int lc;
    do 
    {
        cout<<"Hay chon yeu cau cua ban: "<<endl;
        cout<<"1. a + b"<<endl;
        cout<<"2. a - b"<<endl;
        cout<<"3. ++a"<<endl;
        cout<<"4. a++"<<endl;
        cout<<"5. --a"<<endl;
        cout<<"6. a--"<<endl;
        cout<<"7. a + c"<<endl;
        cout<<"8. a - c"<<endl;
        cout<<"9. ++a + c"<<endl;
        cout<<"10. a++ + c"<<endl;
        cout<<"11. --a + c"<<endl;
        cout<<"12. a-- + c"<<endl;
        cout<<"13. a + c++"<<endl;
        cout<<"14. a + c--"<<endl;
        cout<<"15. a + ++c"<<endl;
        cout<<"16. a + --c"<<endl;
        cout<<"17. a - c++"<<endl;
        cout<<"18. a - c--"<<endl;
        cout<<"19. a - ++c"<<endl;
        cout<<"20. a - --c"<<endl;
        cout<<"21. a++ - c"<<endl;
        cout<<"22. a-- - c"<<endl;
        cout<<"23. a - ++c"<<endl;
        cout<<"24. a - --c"<<endl;
        cout<<"25. a++ - ++c"<<endl;
        cout<<"26. a++ - --c"<<endl;
        cout<<"27. a-- - ++c"<<endl;
        cout<<"28. a-- - --c"<<endl;
        cout<<"29. a++ - ++c"<<endl;
        cout<<"30. a-- - --c"<<endl;
        cout<<"31. Thoat"<<endl;
        cin>>lc;
        switch (lc)
        {
        case 1:
            cout<<"a + b = "<<a + b<<endl;
            break;
        case 2:
            cout<<"a - b = "<<a - b<<endl;
            break;
        case 3: 
            cout<<"++a = "<<++a<<endl;
            break;
        case 4:
            cout<<"a++ = "<<a++<<endl;
            break;
        case 5:
            cout<<"--a = "<<--a<<endl;
            break;
        case 6:
            cout<<"a-- = "<<a--<<endl;
            break;
        case 7:
            cout<<"a + c = "<<a + c<<endl;
            break;
        case 8:
            cout<<"a - c = "<<a - c<<endl;
            break;
        case 9:
            cout<<"++a + c = "<<++a + c<<endl;
            break;
        case 10:
            cout<<"a++ + c = "<<a++ + c<<endl;
            break;
        case 11:
            cout<<"--a + c = "<<--a + c<<endl;
            break;
        case 12:
            cout<<"a-- + c = "<<a-- + c<<endl;
            break;
        case 13:
            cout<<"a + ++c = "<<a + ++c<<endl;
            break;
        case 14:
            cout<<"a + --c = "<<a + --c<<endl;
            break;
        case 15:
            cout<<"a + ++c = "<<a + ++c<<endl;
            break;
        case 16:
            cout<<"a + --c = "<<a + --c<<endl;
            break;
        case 17:
            cout<<"a - ++c = "<<a - ++c<<endl;
            break;
        case 18:    
            cout<<"a - --c = "<<a - --c<<endl;
            break;
        case 19:
            cout<<"a - ++c = "<<a - ++c<<endl;
            break;
        case 20:
            cout<<"a - --c = "<<a - --c<<endl;
            break;
        case 21:
            cout<<"a++ - c = "<<a++ - c<<endl;
            break;
        case 22:
            cout<<"a-- - c = "<<a-- - c<<endl;
            break;
        case 23:
            cout<<"a - ++c = "<<a - ++c<<endl;
            break;
        case 24:
            cout<<"a - --c = "<<a - --c<<endl;
            break;
        case 25:
            cout<<"a++ - ++c = "<<a++ - ++c<<endl;
            break;
        case 26:
            cout<<"a++ - --c = "<<a++ - --c<<endl;
            break;
        case 27:
            cout<<"a-- - ++c = "<<a-- - ++c<<endl;
            break;
        case 28:
            cout<<"a-- - --c = "<<a-- - --c<<endl;
            break;
        case 29:
            cout<<"a++ - ++c = "<<a++ - ++c<<endl;
            break;
        case 30:
            cout<<"a-- - --c = "<<a-- - --c<<endl;
            break;
        case 31:
            break;
        default:
            cout<<"Ban da nhap sai yeu cau"<<endl;
            break;
        }
    } while (lc != 0);
    return 0;
}
