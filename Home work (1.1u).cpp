
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double h = 0.709, b = 2, x, y, min = 2, c=1;
    int j, i, n = 6, a1=-160, a2=0, a3=14;
    double a[] = { -160, 0, 14 };
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            x = b + j * h;
            y = (1 - 5.7 * cos(a[i] - x)) / (2.6 + cos(a[i] + x) * cos(a[i] + x));
            c = c * abs(y);
            if (y < min)
            {
                min = y;
            }
            cout << y << " ";
        }
        cout << endl;
        cout << "c=" << c << "; min=" << min << endl;
    }
}


