#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum%2;
        decNum/=2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int dec;
    cout << "Enter the Decimal number :";
    cin >> dec;

    cout << "Decimal to Binary Convertion is :"<<endl;
    cout << decToBinary(dec);

    return 0;
}