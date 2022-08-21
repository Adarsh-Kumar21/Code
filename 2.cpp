#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator++();
    void operator--();
};
void space::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void space::display()
{
    cout << x << " " << y << " " << z << "\n";
}
void space::operator++()
{
    ++x;
    ++y;
    ++z;
}
void space::operator--()
{
    --x;
    --y;
    --z;
}
int main()
{
    space s;
    s.getdata(10, -20, 30);
    cout << "increament\n";
    s.display();
    ++s;
    s.display();
    space s1;
    s1.getdata(20, 30, 40);
    cout << "decreament\n";
    s1.display();
    --s1;
    s1.display();
    return 0;
}