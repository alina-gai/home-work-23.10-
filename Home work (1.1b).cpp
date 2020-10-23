

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a1 = -19.2, a2 = 1.51, a3 = 7, h = 0.2, b = -0.5, x, y, max=0, min=2;
    int j, i, n = 10;
    double a[] = { -19.2,1.51,7 };
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            x = b + h * j;
            if (a[i] >= 0)
            {
                y = x * cos(a[i] - x + 1);
            }
            if (a[i] < 0)
            {
                y = 2 * cos(a[i] + x);
            }
            if (abs(y) < min)
            {
                min = abs(y);
            }
            if (abs(y) > max)
            {
                max = abs(y);
            }
            cout << y << " ";
        }
        cout << endl;
        cout << "max=" << max << "; min=" << min << endl;
    }
}


