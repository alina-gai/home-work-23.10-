
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double z0 = 0, z1 = -1.02, h = 0.5;
    int i, j;
    const int m = 10;
    const int n = 30;
    double z[n];
    int k[m];
    z[0] = z0;
    z[1] = z1;
    for (j = 0; j < m; j++)
        k[j] = 0;
    for (i = 2; i < n; i++)
    {
        z[i] = ((1 - z[i - 1]) / (1 + z[i - 2] * z[i - 2])) * sin(z[i - 1] * z[i - 1] + z[i - 1] * z[i - 2] + 2);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (z[i] >= j * h && z[i] < (j+1) * h)
            {
                k[j]++;
            }
        }
    }
    for (j = 0; j < m; j++)
    {
        cout << "k[" << j << "]=" << k[j] << " ";
    }
    system("pause");
    return 0;
}


