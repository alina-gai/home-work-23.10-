

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a1 = -3, a2 = 17.01, a3 = 8, h = 0.952, b = -2.5, x, y, c=1, max=0;
    int i, j, n = 6;
    double a[] = { -3, 17.01, 8 };
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            x = b + j * h;
            y = 0.8 + 2 * sin(x) - 5.5 * sin(a[i]) * sin(a[i]);
            c = c * abs(y);
            if (abs(y) > max)
            {
                max = abs(y);
            }
            cout << y << " ";
        }
        cout << endl;
        cout << "c=" << c << "; max=" << max << endl;
    }
}


