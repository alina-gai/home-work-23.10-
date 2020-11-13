

#include <iostream>
using namespace std;

int main()
{
    /*int i, n, t;
    cout << "enter size of array n=";
    cin >> n;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for (i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n-1 - i];
        a[n -1- i] = t;
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";*/

    /*int j,i, n, t, k=0;
    cout << "enter size of array n=";
    cin >> n;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for(i=0;i<n;i++)
        if (a[i] < 0)
        {
            t = a[i];
            for (j = i; j > k; j--)
                a[j] = a[j - 1];
            a[k] = t;
            k++;
        }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";*/

    /*int i, n, b, k=1, j, max=1;
    cout << "enter size of array n=";
    cin >> n;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    b = a[0];
    for (i = 0; i < n; i++)
    {
        k = 1;
        for (j = i + 1; j < n; j++)
            if (a[i] == a[j])
                k++;
        if (k > max)
        {
            max = k;
            b = a[i];
        }
        if (k = max)
            if (a[i] < b)
                b = a[i];
    }
    cout << b << endl;*/

    system("pause");
    return 0;
}


