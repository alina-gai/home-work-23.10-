

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter size of array n=";
    cin >> n;
    int* a = new int[n];
    int i,j,t,k=0;
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            t = a[i];
            for (j = i; j > k;)
            {
                a[j] = a[j - 1];
                j = j - 1;
            }
            a[k] = t;
            k++;
        }
        
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

