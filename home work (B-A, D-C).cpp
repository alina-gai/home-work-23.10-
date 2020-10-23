

#include <iostream>
using namespace std;

int main()
{
    int n;
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
        cout << a[i] << " ";
}

