

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /* 1.1*/
    /*double a1 = -5, a2 = 21.4, a3 = 6, h = 0.556, b = -2, x, y, pr, summ;
    int j, i, n = 7;
    double a[] = { -5, 21.4, 6 };
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            pr = 1;
            summ = 0;
            x = b + h * j;
            if (a[i] >= 0)
            {
                y = sin(1 + a[i] * x - x * x);
            }
            if (a[i] < 0)
            {
                y = sin(a[i] + x) * sin(a[i] + x);
            }
            cout << y << " ";
            pr = pr * y;
            summ += abs(y);
            
        }
        cout << endl;
        cout << "pr=" << pr << " summ=" << summ << endl;
    }*/
    /* 1.2*/
    /*double z0 = 0.75, z1 = -5.35, h = 0.9;
    int i, j;
    const int m = 8;
    const int n = 45;
    double z[n+1];
    int k[m];
    z[0] = z0;
    z[1] = z1;
    for (j = 0; j < m; j++)
        k[j] = 0;
    for (i = 2; i <= n; i++)
    {
        z[i] = sqrt(2 + sin(z[i - 1] + z[i - 2])) + sqrt(2 - cos(z[i - 1] + z[i - 2]));
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if ((z[i]+1.5)*(z[i]+1.5) >= j * h && (z[i] + 1.5) * (z[i] + 1.5) < (j + 1) * h)
            {
                k[j]++;
            }
        }
    }
    for (j = 0; j < m; j++)
    {
        cout << "k[" << j+1 << "]=" << k[j] << " ";
    }*/
    /* 1.3*/
    /*int i, j, n = 11;
    double e = 9.5;
    double* a = new double[n + 1];
    double* b = new double[n + 1];
    a[0] = 0.19;
    b[0] = -7.48;
    for (i = 1; i <= n; i++)
    {
        a[i] = sqrt(2 + sin(a[i - 1] + b[i - 1]) + sqrt(2 - cos(a[i - 1] + b[i - 1])));
        if (a[i - 1] >= 0)
            b[i] = sin(1 + a[i - 1] * b[i - 1] + b[i - 1] * b[i - 1]);
        else b[i] = sin(a[i - 1] + b[i - 1]) * sin(a[i - 1] + b[i - 1]);
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (b[j] / (1 + a[i] * a[i]) < e)
            {
                cout << a[i] << " ";
                    break;
            }
        }
    }*/
    /* 1.4*/
    /*double y, F;
    const int n = 27;
    int i, j;
    double x[] = { -0.8, 1.2, 3.2 };
    int u[n + 1];
    u[0] = 1;
    for (i = 0; i < 3; i++)
    {
        if (x < 0)
        {
            F = log(x[i] * x[i] + 2.7);
        }
        else F = log(x[i] + 2.7);
        for (j = 1; j <= n; j++)
        {
            u[j] = 2 * u[j - 1] / 3 + F / (3 * u[j - 1] * u[j - 1]);
        }
        y = u[n];
        cout << y << " ";
    }*/
system("pause");
return 0;
}


