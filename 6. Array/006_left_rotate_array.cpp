#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cout <<"Enter size of array: ";
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

    for (int r = 0; r < k; r++){
        int first = a[0];
        for (int i = 0; i < n - 1; i++){
            a[i] = a[i + 1];
        }
        a[n - 1] = first;
    }  

    cout << "Array after left rotation:\n";

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}