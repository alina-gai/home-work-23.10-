#include <iostream>
using namespace std;

int main()
{
	/*int a, x, b;
	cin >> a;
	bool t = false;
	while (a > 0 && !t)
	{
		b = a / 10;
		x = a % 10;
		while (b > 0 && !t)
		{
			if (x == b % 10 )
				t = true;
			b=b / 10;
		}
		a = a / 10;
	}
	if (t)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;*/

	/*int a, b, k = 0;
	cin >> a;
	cin >> b;
	while (a != 0 && b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
		k++;
	}
	if (a != 0)
		cout << a << " ";
	else
		cout << b << " ";
	cout << k << endl;*/

   /*int a, b, i;
   cin >> a;
   cin >> b;
   for (a; a <= b; a++)
   {
	   bool flag = true;
	   for (i=2; i<=sqrt(a); i++)
		   if (a % i == 0)
		   {
			   flag = false;
		   }
	   if (flag)
		   cout << a << " ";
   }*/

	/*int a, max, k;
	cin >> a;
	max = a;
	k = 1;
	while (a != 0)
	{
		cin >> a;
		if (a > max)
		{
			max = a;
			k = 1;
		}
		else
		if (a == max)
			k++;
	}
	cout << k << endl;*/

	/*int a, x, k1=1, k2=1, max1=1, max2=1;
	cin >> a;
	while (a !=0)
	{
		x = a;
		cin >> a;
		if (a > x)
			k1++;
		else
			if (k1 > max1)
			{
				max1 = k1;
				k1 = 1;
			}
		if (a < x)
			k2++;
		else
			if (k2 > max2)
			{
				max2 = k2;
				k2 = 1;
			}
	}
	if (max1 > max2)
		cout << max1 << endl;
	else
		cout << max2 << endl;*/

	system("pause");
	return 0;
}

