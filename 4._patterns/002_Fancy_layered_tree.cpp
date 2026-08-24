#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of layers: ";
    cin >> rows;

    // Multiple layers
    for (int layer = 1; layer <= rows; layer++) {
        for (int i = 0; i < layer; i++) {
            for (int j = 0; j < rows - i - 1; j++) {
                cout << " ";
            }
            for (int k = 0; k < 2 * i + 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    // Trunk
    for (int t = 0; t < 3; t++) {
        for (int j = 0; j < rows - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}
