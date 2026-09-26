#include <iostream>
using namespace std;

void change(int &p) {       //pass by alias
    p = 20;
}

int main() {
    int x = 10;

    cout << "Before: " << x << endl;
    change(x);

    cout << "After: " << x << endl;
 
    return 0;
}