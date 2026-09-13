#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter number of positions to rotate: ";
    cin >> k;

    k = k % n;

    // Right rotate k times
    for (int r = 0; r < k; r++)
    {
        int last = a[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = last;
    }

    cout << "Array after right rotation:\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}