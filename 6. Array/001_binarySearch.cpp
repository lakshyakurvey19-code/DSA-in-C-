#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (a[mid] == key)
        {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (key < a[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << "Element not found";

    return 0;
}