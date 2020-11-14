
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    /*int a, b, c, d, t=10000;
    cin >> a >> b;
    cin >> c >> d;
    bool flag = false;
    for (t; t < 100000; t++)
        if (t % a == b && t % c == d)
        {
            cout << t << " ";
            flag = true;
        }
    if (!flag)
        cout << -1 << endl;*/

    /*int n,i;
    cin >> n;
    bool flag = true;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        { 
            flag = false;
            break;
        }
    if (flag)
        cout << "prime" << endl;
    else
        cout << "composite" << endl;*/

    /*int i, n, k=0;
    float res, s=0;
    cout << "enter size of array n=";
    cin >> n;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0)
        {
            s = s + a[i];
            k++;
        }
    res = s / k;
    if (k==0)
        cout << "NO" << endl;
    else
        cout << fixed << setprecision(2) << res << endl;*/

    /*int n;
    cout << "enter size of array n=";
    cin >> n;
    int* a = new int[n];
    int A, B, C, D;
    int i, t;
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;
    cout << "D=";
    cin >> D;
    for (i = A; i <= (B - (B - A) / 2); i++)
    {
        t = a[i];
        a[i] = a[B];
        a[B] = t;
        B = B - 1;
    }
    for (i = C; i <= (D - (D - C) / 2); i++)
    {
        t = a[i];
        a[i] = a[D];
        a[D] = t;
        D = D - 1;
    }

    for (i = 0; i < n; i++)
        cout << a[i] << " ";*/

    system("pause");
    return 0;
}

