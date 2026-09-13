#include <iostream>
#include <bitset>
using namespace std;

// Function to calculate two's complement
int twosComplement(int num) {
    return (~num) + 1;  // Flip bits and add 1
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Original (decimal): " << num << endl;
    cout << "Original (binary):  " << bitset<8>(num) << endl;

    int result = twosComplement(num);

    cout << "Two's Complement (decimal): " << result << endl;
    cout << "Two's Complement (binary):  " << bitset<8>(result) << endl;

    return 0;
}
