// pass by values = Copy of argument is passed to function.

#include <iostream>
using namespace std;

// Function with pass by value
void changeValue(int x) {
    x = x + 10;  // modifies only the local copy
    cout << "Inside function, x = " << x << endl;
}

int main() {
    int num = 5;
    cout << "Before function call, num = " << num << endl;

    changeValue(num);  // pass by value

    cout << "After function call, num = " << num << endl;
    return 0;
}
