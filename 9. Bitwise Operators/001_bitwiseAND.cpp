#include<iostream>
using namespace std;
int main(){
    int a,b;
    int result;

    cout <<"Enter 2 number :";
    cin >> a >> b;

    result = a&b;

    cout << "The Bitwise AND of 2 number is :"<<result;
    return 0;
}