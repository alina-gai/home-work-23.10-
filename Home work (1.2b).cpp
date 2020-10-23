

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double z0 = -0.5, z1 = 1.8, h = 0.6;
    int i, j;
    const int m = 10;
    const int n = 40;
    double z[n];
    int k[m];
    z[0] = z0;
    z[1] = z1;
    for (j = 0; j < m; j++)
        k[j] = 0;
    for (i = 2; i < n; i++)
    {
        if (z[i - 1] >= 0)
        {
            z[i] = z[i - 2] * cos(z[i - 1] - z[i - 2] + 1);
        }
        if (z[i - 1] < 0)
        {
            z[i] = 2 * cos(z[i - 1] + z[i - 2]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (abs(z[i]) >= j * h && abs(z[i]) < (j + 1) * h)
            {
                k[j]++;
            }
        }
    }
    for (j = 0; j < m; j++)
    {
        cout << "k[" << j << "]=" << k[j] << " ";
    }

    return 0;
}


