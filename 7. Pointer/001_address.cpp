#include<iostream>
using namespace std;

int main(){
    float price = 100.3000f;
    float *ptr = &price;

    cout << ptr << endl;
    cout << &price << endl;

    return 0;
}