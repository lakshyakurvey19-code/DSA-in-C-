#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num = 5;
    cout << "Original number: " << num 
         << " -> " << bitset<8>(num) << endl;

    int onesComplement = ~num; // bitwise NOT
    cout << "One's complement: " << onesComplement 
         << " -> " << bitset<8>(onesComplement) << endl;

    return 0;
}
 