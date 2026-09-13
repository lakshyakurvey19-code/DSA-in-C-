#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Tree top (pyramid)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";   // spaces
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";   // stars
        }
        cout << endl;
    }

    // Tree trunk
    for (int t = 0; t < 2; t++) {
        for (int j = 0; j < rows - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}
