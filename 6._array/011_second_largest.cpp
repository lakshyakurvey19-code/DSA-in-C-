#include <iostream>
using namespace std;

int main()
{
    int n, num;
    int largest, secondLargest;

    cout << "Enter how many numbers: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    cin >> largest;

    secondLargest = largest;

    for (int i = 1; i < n; i++)
    {
        cin >> num;

        if (num > largest)
        {
            secondLargest = largest;
            largest = num;
        }
        else if (num > secondLargest && num != largest)
        {
            secondLargest = num;
        }
    }

    cout << "Second largest number = " << secondLargest;

    return 0;
}