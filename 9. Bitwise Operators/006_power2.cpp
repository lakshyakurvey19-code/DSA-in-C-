#include<iostream>
// #include<cmath>
using namespace std;

int main(){
    int n,expo = 0;
    cout << "Enter the number :";
    cin >> n;

    if(n<=0){
        cout << n <<" is not a power of 2."<<endl;
    }
    else{
        int temp = n;
        while(temp % 2 == 0){
            temp = temp/2;
            expo++;
        }
        if(temp == 1){
            cout << n <<" is a power of 2 (2^"<<expo<<")."<<endl;
        }
        else{
            cout<< n<<" is not a power of 2"<<endl;
        }
    }
    return 0;
}