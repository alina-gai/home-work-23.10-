﻿

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   /* int i, j, n = 20;
    double e = 0.5;
    double* a = new double[n + 1];
    double* b = new double[n + 1];
    a[0] = -0.5;
    b[0] = 2.72;
    for (i = 1; i <= n; i++)
    {
        a[i] = (1 - a[i - 1]) / (1 + b[i - 1] * b[i - 1]) * sin(a[i - 1] * a[i - 1] + a[i - 1] * b[i - 1] + 2);
        b[i] = 0.8 + 2 * sin(b[i - 1]) - 5.5 * sin(a[i - 1]) * sin(a[i - 1]);
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (abs(a[i] - b[j]) < e)
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
    system("pause");
    return 0;*/

    /*int i, j, n = 13;
    double e = 2.5;
    double* a = new double[n + 1];
    double* b = new double[n + 1];
    a[0] = 1.5;
    b[0] = -0.14;
    for (i = 1; i <= n; i++)
    {
        a[i] = (1 - a[i - 1]) / (1 + b[i - 1] * b[i - 1]) * sin(a[i - 1] * a[i - 1] + a[i - 1] * b[i - 1] + 2);
        if (a[i - 1] >= 0)
            b[i] = b[i - 1] * cos(a[i - 1] - b[i - 1] + 1);
        else b[i] = 2 * cos(a[i - 1] + b[i - 1]);
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i]*a[i]-b[j]*b[j] < e)
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
    system("pause");
    return 0;*/
}


