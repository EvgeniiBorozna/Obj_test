#include <iostream>
#define TEST

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
    //int a;
    cla_ ccc;
    ccc.x = 1;
    ccc.y = 2;
    cin >> ccc.z; // = 3.1;
    ccc.pri();
    ccc.pri(4,6);
    cout << ccc.x + ccc.y + ccc.z << endl;
    cout << endl;
    //cin >> a;
    return (0);
}
