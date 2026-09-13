#include<iostream>
using namespace std;
int sumOfDigits(int num){
    int digSum = 0;
    
    while(num > 0){
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }

    return digSum;
}

int main(){
    int n;
    cout << "Enter the number :";
    cin >> n;
    cout << "Sum = " << sumOfDigits(n) << endl;

    return 0;
}