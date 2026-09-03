#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int b[m];

    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int c[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    cout << "Merged array:\n";
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}