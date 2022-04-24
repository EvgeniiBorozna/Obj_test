/*
DEV
*/
#include <iostream>
#include <string>
#define TEST1

using namespace std;

class cla_ {
public:
    int x;
    int y;
#ifdef TEST
    int z;
    #else
        float z;
#endif

void pri ()
    {
        cout << "X = " << x << "\tY = " << y << "\tZ = " << z << endl;
    }

void pri (int a, int b)
    {
        cout << "X = " << a << "\tY = " << b << endl;
    }
};

int main()
{
    string a;
    cla_ ccc;
m0: cout << "Enter X: ";
    cin >> a;
try
{
    ccc.x = stoi(a);
}
catch(...)
{
    cerr << "Only numbers are allowed! \n";
    goto m0;
}
    cout << "Enter Y: ", cin >> ccc.y;
    cout << "Enter Z: ", cin >> ccc.z;
    ccc.pri();
    ccc.pri(ccc.x, ccc.y);
    cout << ccc.x + ccc.y + ccc.z << endl;
    cout << endl;
    return (0);
}
