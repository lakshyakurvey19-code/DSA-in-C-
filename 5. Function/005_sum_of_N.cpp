#include<iostream>
using namespace std;
int sumN(int n){
    int sum = 1;
    for(int i=1; i<=n; i++){
        sum *= i;
    }
    return sum;
}

int main(){
    int p;
    cout << "Enter the number :";
    cin >> p;

    cout << "The sum of first N number is :"<< sumN(p);

    return 0;
}