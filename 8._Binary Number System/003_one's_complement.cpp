#include <iostream>
#include <bitset>
using namespace std;

// Function to calculate one's complement
int onesComplement(int num) {
    return ~num;  // Flip bits
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Original (decimal): " << num << endl;
    cout << "Original (binary):  " << bitset<8>(num) << endl;

    int result = onesComplement(num);

    cout << "One's Complement (decimal): " << result << endl;
    cout << "One's Complement (binary):  " << bitset<8>(result) << endl;

    return 0;
}
