#include<iostream>
using namespace std;
int binTODec(int binNum){
    int ans = 0, pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += rem*pow;

        binNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main(){
    int bin;
    cout <<"Enter the Binary digits(0/1):";
    cin >> bin;

    cout <<"Binary to Decimal convert :"<<endl;
    cout << binTODec(bin);

    return 0;
}